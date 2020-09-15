package test;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

import com.gta.qts.c2j.adaptee.impl.GTAQTSApiBaseImpl;
import com.gta.qts.c2j.adaptee.structure.QTSDataType.MsgType;
import com.gta.qts.c2j.adaptee.structure.QTSDataType.RetCode;
import com.gta.qts.c2j.adaptee.structure.QTSDataType;
import com.gta.qts.c2j.adaptee.structure.SSEL2_Quotation;
import com.gta.qts.c2j.adaptee.structure.SZSEL2_Quotation;
import com.gta.qts.c2j.adaptee.structure.StockSymbol;
import com.gta.qts.c2j.adaptee.IGTAQTSApi;
import com.gta.qts.c2j.adaptee.IGTAQTSCallbackBase;



public class Example {

    public static void main(String[] args) throws IOException {
        // ������Ϣ�ص��������ڽ���ʵʱ����
        IGTAQTSCallbackBase callback = new GTACallbackBase();
        
        //����API���������˽���ʹ��
        IGTAQTSApi baseService = GTAQTSApiBaseImpl.getInstance().CreateInstance(callback);
        
        //����API������ʼ�����ڿ�ʼʹ��API��������ǰ��ֻ����һ��
        baseService.BaseInit();
        //���ó�ʱʱ��
        baseService.BaseSetTimeout(30);
        
      //ע��FENS��ַ
        //***** ���棺ʵ����������ʹ��ʱ���ӹ�̩����˾��ȡ����FENS��ַ���˴���Ҫȫ��ͨ����RegisterService�������ӿ�ע�ᣬ
        //*****       ���������ݸ߿��÷��棬�����ۿۡ�
        //***** ����4��FENS ip��ַ����Ҫ���µ��ã�
        //      baseService.BaseRegisterService("192.168.105.136", (short)7777);
        //      baseService.BaseRegisterService("192.168.105.137", (short)7777);
        //      baseService.BaseRegisterService("192.168.105.138", (short)7777);
        //      baseService.BaseRegisterService("192.168.105.139", (short)7777);
        baseService.BaseRegisterService("10.1.35.45", (short)8888);
        baseService.BaseRegisterService("192.168.105.137", (short)7777);
        baseService.BaseRegisterService("192.168.105.138", (short)7777);
        baseService.BaseRegisterService("192.168.105.139", (short)7777);
        
        
        do{
            //ͨ���û������������������½
            int ret = baseService.BaseLoginX("test1", "123456","NetType=0");
            if ( QTSDataType.RetCode.Ret_Success != QTSDataType.RetCode.fetchByCode(ret) ){
                System.out.println("Login error:" + ret);
                break;
            }
            System.out.println("Login success");
            
            List<StockSymbol> outList = new ArrayList<StockSymbol>();
            
            // ��ȡ�Ͻ�������������б�����SSE��ʾ�Ͻ�����SZSE��ʾ���sse,
            ret = baseService.BaseGetStockList("szse,sse", outList);
            if ( QTSDataType.RetCode.Ret_Success != QTSDataType.RetCode.fetchByCode(ret) ){
                System.out.println("GetStockList(sse,szse) error:" + ret);
                break;
            }
            System.out.println("GetStockList success");
            
            //�����ȡ����֤ȯ����
            System.out.print("StockList:" + outList.size() + "  ");
            for (int idx = 0; idx < outList.size(); idx++) {
                if (idx > 0) {
                    System.out.print(",");
                }
                byte[] bytesymbol = outList.get(idx).Symbol;
                String Symbol = new String(bytesymbol,0,bytesymbol.length,"UTF-8").trim();
                System.out.print(Symbol);
            }
            System.out.println("");
            
            List<Integer> msgtypeList = new ArrayList<Integer>();
            
            //��ȡ�û�Ȩ���б�
            ret = baseService.BaseGetMsgTypeList(msgtypeList);
            if ( RetCode.Ret_Success != RetCode.fetchByCode(ret) ){
                System.out.println("GetMsgTypeList error:" + ret);
                break;
            }
            System.out.println("GetMsgTypeList success");
            
            //�����ȡ�����û�Ȩ���б�
            System.out.print("MsgType:" + msgtypeList.size() + "  ");
            for (int idx = 0; idx < msgtypeList.size(); idx++) {
                MsgType msgType = MsgType.fetchByCode(msgtypeList.get(idx));
                if (msgType != null) {
                    System.out.print(((idx > 0) ? ",Msg_" : "Msg_") + msgType.name());
                }
            }
            System.out.println("");
            
            // �����붩�����ʵʱ��������
            ret = baseService.BaseSubscribe(MsgType.SZSEL2_Quotation.code, "000001,000002,000003");
            if ( RetCode.Ret_Success != RetCode.fetchByCode(ret) ){
                System.out.println("Subscribe error:" + ret);
                break;
            }
            System.out.println("Subscribe success");
            
            //���ĳɹ����������������߳�
            SZSEL2_Quotation_FileOut.startThread();
            
            //�ȴ��ͻ�������ټ���ִ��
            System.out.println("press Enter to continue...(Unsubscribe all data)");
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            br.readLine();
            
            // ������ȡ�����ʵʱ��������
            ret = baseService.BaseUnsubscribe(MsgType.SZSEL2_Quotation.code, "000001");
            if ( RetCode.Ret_Success != RetCode.fetchByCode(ret) ){
                System.out.println("Unsubscribe error:" + ret);
                break;
            }
            System.out.println("Unsubscribe 000001 success");
            
            // ȡ�����ʵʱ���д���
            ret = baseService.BaseUnsubscribe(MsgType.SZSEL2_Quotation.code, null);
            if ( RetCode.Ret_Success != RetCode.fetchByCode(ret) ){
                System.out.println("Unsubscribe error:" + ret);
                break;
            }
            System.out.println("Unsubscribe all success");
            
            List<SZSEL2_Quotation> snapList = new ArrayList<SZSEL2_Quotation>();
            
            //���ʵʱ������ղ�ѯ
            ret = baseService.QuerySnap_SZSEL2_Quotation("000001,000002,000003", snapList);
            if ( RetCode.Ret_Success != RetCode.fetchByCode(ret) ){
                System.out.println("QuerySnap_SZSEL2_Quotation error:" + ret);
                break;
            }
            System.out.println("QuerySnap_SZSEL2_Quotation success");
            
            //�����ѯ���ս��
            System.out.println("QuerySnap_SZSEL2_Quotation : count=" + snapList.size());
            for (int idx = 0; idx < snapList.size(); idx++) {
                byte[] symbol = snapList.get(idx).Symbol;
                String strSymbol = new String(symbol,0,symbol.length,"UTF-8").trim();
                System.out.println("LocalTimeStamp=" + snapList.get(idx).LocalTimeStamp
                        + " Symbol=" + strSymbol
                        + " OpenPrice=" + snapList.get(idx).OpenPrice
                        + " TotalAmount=" + snapList.get(idx).TotalAmount
                        );
            }
            
        }while(false);
        
        System.out.print("press Enter to end...");
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        br.readLine().trim();
        
        //����API��������ʼ��
        baseService.BaseUninit();
        
        System.out.println("GTA API exit");
    }

}
