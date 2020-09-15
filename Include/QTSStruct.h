//////////////////////////////////////////////////////////////////////////////
/// @file       QTSStruct.h 
/// @brief      ������Ϣ�ṹ�嶨���ļ�
/// @copyright  Copyright (C), 2008-2014, GTA Information Tech. Co., Ltd.
/// @version    2.0
/// @date       2014.7.18
//////////////////////////////////////////////////////////////////////////////
#ifndef GTA_QTS_STRUCT_H_
#define GTA_QTS_STRUCT_H_
#include "QTSDataType.h"

#pragma pack(8)


/// ������λ��Ϣ�����ۡ���������3����Ϣ
struct  BuySellLevelInfo3
{
    double              Price;                  ///< �۸�,3λС��
    unsigned long long  Volume;                 ///< ��
    unsigned int        TotalOrderNo;           ///< ί�б���
};
/// ��� ������λ��Ϣ�����ۡ���������3����Ϣ
struct SZSE_BuySellLevelInfo3
{
    double              Price;                  ///< �۸�,6λС��
    double              Volume;                 ///< ����2λС��
    unsigned long long  TotalOrderNo;           ///< ί�б���
};
/// ������λ��Ϣ�����ۡ�����Ϣ
struct  BuySellLevelInfo
{
    double              Price;                  ///< �۸�,3λС��
    unsigned long long  Volume;                 ///< ��
};
/// ������ ������λ��Ϣ�����ۡ������Ƶ���3����Ϣ
struct  DCE_BuySellLevelInfo3
{
    double              Price;                  ///< �۸�,3λС��
    unsigned long long  Volume;                 ///< ��
    unsigned long long  ImplyQty;               ///< �Ƶ���
};
/// ������ ����ί�е�λ��Ϣ
struct  DCE_BuySellOrdeLevelInfo
{
    unsigned int        TotalOrderNo;           ///< ί�б���
};
/// ������ �ּ۳ɽ���������Ϣ
struct  DCE_PriceLevelInfo
{
    double              Price;               ///< �۸�
    unsigned long long  PriceBOQty;          ///< ������
    unsigned long long  PriceBEQty;          ///< ��ƽ����
    unsigned long long  PriceSOQty;          ///< ��������
    unsigned long long  PriceSEQty;          ///< ��ƽ����
};
/// ���������λ��Ϣ
struct SZSE_BuySellLevelInfo
{
    double              Price;                  ///< �۸�
    double              Volume;                 ///< ��
};

#define LEVEL_ONE           1       ///< һ������
#define LEVEL_FIVE          5       ///< �嵵����
#define LEVEL_TEN           10      ///< ʮ������
#define SETTLE_LEN          10      ///< ��������볤��
#define ORDER_LEVEL_FIFTY   50      ///< 50��ί��
#define OTC_ELEMENT_LEN     3       ///< ���̡����ס����̾��۲�������

/// �Ͻ���L1��̬����
struct SSEL1_Static
{
    int                 LocalTimeStamp;                     ///< ���ݽ���ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< 1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    int                 Time;                               ///< ��������ʱ�䣬��ʶ�ӿ��б���¼����ʱ��HHMMSSMMM
    char                Symbol[SYMBOL_LEN];                 ///< ֤ȯ����, 
    char                ISINCode[12];                       ///< ISIN����, 
    char                SecurityName[SECURITY_NAME_LEN];    ///< ֤ȯ����, 
    char                SecurityEN[SECURITY_EN_LEN];        ///< Ӣ��֤ȯ����, 
    char                SymbolUnderlying[SYMBOL_LEN];       ///< ����֤ȯ����, 
    char                MarketType[6];                      ///< �г�����, ��ASHR����ʾA���г�����BSHR����ʾB���г�����CSHR����ʾ���ʰ��г���
    char                CFICode[6];                         ///< ֤ȯ���, ��ES����ʾ��Ʊ����EU����ʾ���𣻡�D����ʾծȯ����RWS����ʾȨ֤����FF����ʾ�ڻ���
    char                SecuritySubType[6];                 ///< ֤ȯ�����, �Զ�����ϸ֤ȯ���
    char                Currency[5];                        ///< ����, CNY = ����ң�HKD = �۱�
    double              ParValue;                           ///< ��ֵ.ծȯ��ǰ��ֵ����λԪ��������Ʒȡ0.000
    long long           TradableNo;                         ///< ����ͨδ��������, Ԥ��
    int                 EndDate;                            ///< ���������. ���ڹ�ծԤ���в�Ʒ��Ϊ��������ڣ���ʽΪYYYYMMDD
    int                 ListingDate;                        ///< ��������, ���Ͻ������ս������ڣ�YYYYMMDD
    unsigned int        SetNo;                              ///< ��Ʒ�����, ȡֵ��Χ��1��999,������������Ʒ��һ�ַ��鷽ʽ�������ڶ���������Ը��ؾ�����䡣��ֵ��һ���������ڲ���仯��
    unsigned int        BuyVolumeUnit;                      ///< ��������λ, �򶩵����걨���������Ǹ��ֶε���������
    unsigned int        SellVolumeUnit;                     ///< ��������λ, ���������걨���������Ǹ��ֶε���������
    unsigned int        DeclareVolumeFloor;                 ///< �걨������, �걨��������
    unsigned int        DeclareVolumeCeiling;               ///< �걨������, �걨��������
    double              PreClosePrice;                      ///< ���ռ�, 3λС����ǰ���̼۸����г�Ȩ��Ϣ��Ϊ��Ȩ��Ϣ������̼ۣ������ڻ����г�����ʵʱ���꣬ȡֵΪ0.010
    double              TickSize;                           ///< ��С���۵�λ, �걨�۸����С�䶯��λ
    char                UpDownLimitType;                    ///< �ǵ�����������, ��N����ʾ���׹���3.4.13�涨�����ǵ����������ͻ���Ȩ֤����취��22���涨����R'��ʾ���׹���3.4.15��3.4.16�涨�����ǵ����������ͣ���S����ʾ�ع��ǵ����������͡�
    double              PriceUpLimit;                       ///< �Ƿ��۸�, ����N�����ǵ������ƵĲ�Ʒ�����ֶε��ղ�����ģ�����ǰ���̼ۣ����������н��ײ�ƷΪ���мۣ����㣻����R�������ǵ������ƵĲ�Ʒ�����ֶ�ȡ����ʱ���ڲο��۸��������޼۸�
    double              PriceDownLimit;                     ///< �����۸�, ���㷽ʽ�ο��Ƿ����޼۸�
    double              XRRatio;                            ///< ��Ȩ����, ÿ���͹ɱ��������ڹ�ծԤ���в�Ʒ��Ϊ��֤�������
    double              XDAmount;                           ///< ��Ϣ���, ÿ�ɷֺ���
    char                CrdBuyUnderlying;                   ///< ���ʱ�ı�־, ��T����ʾ�����ʱ��֤ȯ����F����ձ�ʾ�������ʱ��֤ȯ��
    char                CrdSellUnderlying;                  ///< ��ȯ��ı�־, ��T����ʾ����ȭ���֤ȯ����F����ձ�ʾ������ȯ���֤ȯ��
    char                SecurityStatus[20];                 ///< ���ֶ�Ϊ20λ�ַ�����ÿλ��ʾ�����Ӧ��ҵ���޶�������ո�
                                                            ///< ��0λ��Ӧ����N����ʾ�������С�
                                                            ///< ��1λ��Ӧ����D����ʾ��Ȩ��
                                                            ///< ��2λ��Ӧ����R����ʾ��Ϣ��
                                                            ///< ��3λ��Ӧ����D����ʾ���������������ײ�Ʒ����S����ʾ��Ʊ���վ�ʾ��Ʒ����P����ʾ���������Ʒ����T����ʾ����ת�ò�Ʒ����U����ʾ���ȹɲ�Ʒ��
                                                            ///< ��4λ��Ӧ����S����ʾծȯ���վ�ʾ�ࡣ��4λδ����Ϊ�����ã��˸Ķ���δʵʩ�������Խ�����֪ͨΪ׼��
                                                            ///< ��5λ��Ӧ����L����ʾծȯͶ�����ʵ���Ҫ���ࡣ
    int                 TradeDate;                          ///< �г�����,������
    //2.8.2 �¼��ֶ�
    char                GageUnderlying;                    ///< ����Ʒ��ı�־ , ��T����ʾ�ǵ���Ʒ��ģ���F����ձ�ʾ�ǵ���Ʒ��ġ�
    double              CrdBuyBalance;                     ///< �������
    unsigned long long  CrdSellMargin;                     ///< ��ȯ����

};

/// �Ͻ���L1ʵʱ����
struct SSEL1_Quotation
{
    int                 LocalTimeStamp;                     ///< ���ݽ���ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< ����Դ��־,1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    long long           PacketTimeStamp;                    ///< ��ͷʱ��,����������ʱ�䣬��ʽΪ������ʱ��YYYYMMDDHHMMSSMMM
    int                 Time;                               ///< ��������ʱ��,ʱ���143025��ʾ 14:30:25
    char                Symbol[SYMBOL_LEN];                 ///< ֤ȯ����,��Ȩ��Լ�Ĳ�Ʒ����;Ψһ��ʾ
    char                SecurityName[SECURITY_NAME_LEN];    ///< ֤ȯ���,UTF-8����
    double              OpenPrice;                          ///< ���̼�
    double              HighPrice;                          ///< ��߼�
    double              LowPrice;                           ///< ��ͼ�
    double              LastPrice;                          ///< �ּ�
    unsigned long long  TotalNo;                            ///< �ɽ�����
    unsigned long long  TotalVolume;                        ///< �ɽ�����,��Ʊ����;Ȩ֤����;ծȯ����
    double              TotalAmount;                        ///< �ɽ��ܶ�,��Ԫ��
    double              PreClosePrice;                      ///< ���ռ�
    double              ClosePrice;                         ///< �����̼�
    union
    {
        BuySellLevelInfo    SellLevel[LEVEL_FIVE];      ///< �嵵������
        struct  
        {
            double              SellPrice01;            ///< ������1
            unsigned long long  SellVolume01;           ///< ������1
            double              SellPrice02;            ///< ������2
            unsigned long long  SellVolume02;           ///< ������2
            double              SellPrice03;            ///< ������3
            unsigned long long  SellVolume03;           ///< ������3
            double              SellPrice04;            ///< ������4
            unsigned long long  SellVolume04;           ///< ������4
            double              SellPrice05;            ///< ������5
            unsigned long long  SellVolume05;           ///< ������5
        };
    };
    union
    {
        BuySellLevelInfo    BuyLevel[LEVEL_FIVE];        ///< �嵵������
        struct  
        {
            double              BuyPrice01;             ///< �����1
            unsigned long long  BuyVolume01;            ///< ������1
            double              BuyPrice02;             ///< �����2
            unsigned long long  BuyVolume02;            ///< ������2
            double              BuyPrice03;             ///< �����3
            unsigned long long  BuyVolume03;            ///< ������3
            double              BuyPrice04;             ///< �����4
            unsigned long long  BuyVolume04;            ///< ������4
            double              BuyPrice05;             ///< �����5
            unsigned long long  BuyVolume05;            ///< ������5
        };
    };
    double              NAV;                                ///< ����T-1���ۼƾ�ֵ,��λС��
    double              IOPV;                               ///< ETF��ֵ��ֵ
    char                SecurityPhaseTag[PHRASE_TAG_LEN];   ///< ���ֶ�Ϊ8λ�ַ���������ÿλ��ʾ�ض��ĺ��壬�޶�������ո�
                                                            ///< ��1λ����S����ʾ����������ǰ��ʱ�Σ���C����ʾ���Ͼ���ʱ�Σ���T����ʾ��������ʱ�Σ���E����ʾ����ʱ�Σ���P����ʾ��Ʒͣ�ƣ���M����ʾ�ɻָ����׵��۶�ʱ�Σ����м��Ͼ��ۣ�����N����ʾ���ɻָ����׵��۶�ʱ�Σ���ͣ���������У�����U����ʾ���̼��Ͼ���ʱ�Ρ�
                                                            ///< ��2λ����0����ʾ�˲�Ʒ�����������ף���1����ʾ�˲�Ʒ���������ף���������ո�
                                                            ///< ��3λ����0����ʾδ���У���1����ʾ�����С�
                                                            ///< ��4λ����0����ʾ�˲�Ʒ�ڵ�ǰʱ�β����ܽ����¶����걨����1�� ��ʾ�˲�Ʒ�ڵ�ǰʱ�οɽ��ܽ����¶����걨����������ո�
    int                 SecurityType;                       ///< ֤ȯ�����룬1��ʾָ���������ݣ� 2��ʾ��Ʊ�� A�� B �ɣ��������ݣ�3��ʾծȯ�������ݣ�4��ʾ�����������ݣ�
};

/// �Ͻ���ָ��ͨ����
struct SSE_IndexPress
{
    int                 LocalTimeStamp;                     ///< ���ݽ���ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< 1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    long long           PacketTimeStamp;                    ///< ��ͷʱ��YYYYMMDDHHMMSSMMM
    int                 TradeDate;                          ///< ������,���ڵĸ�ʽΪ��YYYYMMDD��
    int                 ActionDay;                          ///< ҵ������,�����ļ����������Ȼ���ڣ�����ʱ�䣩������Ϊ�����ڼ�����������Ȼ���ڣ�����ʱ�䣩 ���ڵĸ�ʽΪ�� YYYYMMDD��
    int                 Time;                               ///< ��������ʱ�䣬�����ļ��ĸ���ʱ���������ʱ�䣩����ʽΪ��HHMMSS��
    char                Symbol[SYMBOL_LEN];                 ///< ָ������
    char                SecurityName[40];                   ///< ָ�����
    char                MarketType[6];                      ///< �г����� 0��ȫ��1����֤���� 2������� 3�����4����ۣ� 5����̫��
    double              LastPrice;                          ///< ���¼�,���տ���ֵ����ǰ�����տ���ָ��ֵ�� ��ʼֵΪ 0.0000�� ��ֵΪ 0.0000ʱ��˵��ָ��δ����
    double              OpenPrice;                          ///< ���̼�
    double              HighPrice;                          ///< ��߼�
    double              LowPrice;                           ///< ��ͼ�
    double              ClosePrice;                         ///< �����̼�,��ǰ����������ֵ����ʼֵΪ 0.0000����ֵ��Ϊ 0.0000ʱ��˵��ָ��������
    double              PreClosePrice;                      ///< ���ռ�
    double              PriceUpdown1;                       ///< �ǵ� LastPrice-PreClosePrice
    double              UpDownRate;                         ///< �ǵ���
    unsigned long long  TotalVolume;                        ///< �ɽ�����,��λ����
    double              TotalAmount;                        ///< �ɽ����,����Ԫ��
    double              ExchangeRate;                       ///< ���ʣ��û���������ʱΪ0.00000000�����̺󣬸û���ֵΪ��ָ������ʱ����ָ����ʹ�õĻ���
    char                Currency[5];                        ///< ����, 0������ң� 1���۱ң� 2����Ԫ�� 3��̨�ң� 4����Ԫ
    int                 DisplayNum;                         ///< ָ��չʾ���,չʾָ����˳��ָ��չʾ��Ž�������
    double              ClosePrice2;                        ///< ��������ֵ2������ָ��Ϊȫ��ָ����������ֵΪ������̫������ֵ����ʼֵΪ0.0000����ֵ��Ϊ0.0000ʱ��˵��ָ����̫��������
    double              ClosePrice3;                        ///< ��������ֵ3������ָ��Ϊȫ��ָ����������ֵΪ����ŷ��������ֵ����ʼֵΪ0.0000����ֵ��Ϊ0.0000ʱ��˵��ָ��ŷ����������
};

/// �Ͻ���L2��̬����
struct SSEL2_Static
{
    int                 LocalTimeStamp;                     ///< ���ݽ���ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< 1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    long long           PacketTimeStamp;                    ///< ���ݰ�ͷʱ��YYYYMMDDHHMMSSMMM
    int                 Time;                               ///< ��������ʱ�䣬��ʶ�ӿ��б���¼����ʱ��HHMMSSMMM
    char                Symbol[SYMBOL_LEN];                 ///< ֤ȯ����, 
    char                ISINCode[12];                       ///< ISIN����, 
    char                SecurityName[SECURITY_NAME_LEN];    ///< ֤ȯ����, 
    char                SecurityEN[SECURITY_EN_LEN];        ///< Ӣ��֤ȯ����, 
    char                SymbolUnderlying[SYMBOL_LEN];       ///< ����֤ȯ����, 
    char                MarketType[6];                      ///< �г�����, ��ASHR����ʾA���г�����BSHR����ʾB���г�����CSHR����ʾ���ʰ��г���
    char                CFICode[6];                         ///< ֤ȯ���, ��ES����ʾ��Ʊ����EU����ʾ���𣻡�D����ʾծȯ����RWS����ʾȨ֤����FF����ʾ�ڻ���
    char                SecuritySubType[6];                 ///< ֤ȯ�����, �Զ�����ϸ֤ȯ���
    char                Currency[5];                        ///< ����, CNY = ����ң�HKD = �۱�
    double              ParValue;                           ///< ��ֵ,ծȯ��ǰ��ֵ����λԪ��������Ʒȡ0.000
    long long           TradableNo;                         ///< ����ͨδ��������, Ԥ��
    int                 EndDate;                            ///< ���������,���ڹ�ծԤ���в�Ʒ��Ϊ��������ڣ���ʽΪYYYYMMDD
    int                 ListingDate;                        ///< ��������, ���Ͻ������ս������ڣ�YYYYMMDD
    unsigned int        SetNo;                              ///< ��Ʒ�����, ȡֵ��Χ��1��999,������������Ʒ��һ�ַ��鷽ʽ�������ڶ���������Ը��ؾ�����䡣��ֵ��һ���������ڲ���仯��
    unsigned int        BuyVolumeUnit;                      ///< ��������λ, �򶩵����걨���������Ǹ��ֶε���������
    unsigned int        SellVolumeUnit;                     ///< ��������λ, ���������걨���������Ǹ��ֶε���������
    unsigned int        DeclareVolumeFloor;                 ///< �걨������, �걨��������
    unsigned int        DeclareVolumeCeiling;               ///< �걨������, �걨��������
    double              PreClosePrice;                      ///< ���ռ�, 3λС����ǰ���̼۸����г�Ȩ��Ϣ��Ϊ��Ȩ��Ϣ������̼ۣ������ڻ����г�����ʵʱ���꣬ȡֵΪ0.010
    double              TickSize;                           ///< ��С���۵�λ, �걨�۸����С�䶯��λ
    char                UpDownLimitType;                    ///< �ǵ�����������, ��N����ʾ���׹���3.4.13�涨�����ǵ����������ͻ���Ȩ֤����취��22���涨����R'��ʾ���׹���3.4.15��3.4.16�涨�����ǵ����������ͣ���S����ʾ�ع��ǵ����������͡�
    double              PriceUpLimit;                       ///< �Ƿ��۸�, ����N�����ǵ������ƵĲ�Ʒ�����ֶε��ղ�����ģ�����ǰ���̼ۣ����������н��ײ�ƷΪ���мۣ����㣻����R�������ǵ������ƵĲ�Ʒ�����ֶ�ȡ����ʱ���ڲο��۸��������޼۸�
    double              PriceDownLimit;                     ///< �����۸�, ���㷽ʽ�ο��Ƿ����޼۸�
    double              XRRatio;                            ///< ��Ȩ����, ÿ���͹ɱ��������ڹ�ծԤ���в�Ʒ��Ϊ��֤�������
    double              XDAmount;                           ///< ��Ϣ���, ÿ�ɷֺ���
    char                CrdBuyUnderlying;                   ///< ���ʱ�ı�־, ��T����ʾ�����ʱ��֤ȯ����F����ձ�ʾ�������ʱ��֤ȯ��
    char                CrdSellUnderlying;                  ///< ��ȯ��ı�־, ��T����ʾ����ȭ���֤ȯ����F����ձ�ʾ������ȯ���֤ȯ��
    char                SecurityStatus[20];                 ///< ��Ʒ״̬��ʶ, ��0λ��Ӧ����N����ʾ�������У���1λ��Ӧ����D����ʾ��Ȩ����2λ��Ӧ����R'��ʾ��Ϣ����3λ��Ӧ����D����ʾ���������������ײ�Ʒ����S����ʾ���վ�ʾ��Ʒ����P����ʾ���������Ʒ��
    unsigned int        SampleNo;                           ///< ��������, ָ����ǰ����������
    double              SampleAvgPrice;                     ///< ��������, ָ����ǰ�����ľ���,�м���ֵ/���йɱ�,����ָ�겻ͳ������� N/A
    double              TradeAmount;                        ///< �ɽ����, ָ����ǰ�����ĵ��ճɽ�����λ����Ԫ��
    double              AvgCapital;                         ///< ƽ���ɱ�, ָ����ǰ������ƽ���ɱ�,������ƽ������λ���ڹɣ�,����ָ�겻ͳ������� N/A
    double              TotalMarketValue;                   ///< ����ֵ, ָ����ǰ����������ֵ���� �������ͣ� ��λ�� ����Ԫ��,����ָ�겻ͳ������� N/A
    double              MarketValueRatio;                   ///< ռ��%, ָ����ǰ����������ֵռ��֤��ָȫ����������ֵ,�ٷֱ�,����ָ�겻ͳ������� N/A
    double              StaticPERatio;                      ///< ��̬��ӯ��, ָ����ǰ�����ľ�̬��ӯ�ʡ���ʽ���ϼƣ���������̼�*�������� /�ϼƣ�ÿ������*��������,����ָ��δͳ������� N/A
    char                IndexLevelStatus[20];               ///< ָ�������ʶ, ǰ 5 λΪָ��������ֵ�����һλ��ָ��������Ϣ��
                                                            ///< 1 Ϊ�ص�ָ��
                                                            ///< 2 Ϊȫòָ��
                                                            ///< �����ɸ�����Ҫ��չ��
    int                 TradeDate;                          ///< �г�����,������ YYYYMMDD
    //2.8.2 �¼��ֶ�
    char                GageUnderlying;                    ///< ����Ʒ��ı�־ , ��T����ʾ�ǵ���Ʒ��ģ���F����ձ�ʾ�ǵ���Ʒ��ġ�
    double              CrdBuyBalance;                      ///< �������
    unsigned long long  CrdSellMargin;                      ///< ��ȯ����
};

/// �Ͻ���L2ʵʱ����
struct SSEL2_Quotation
{
    int                 LocalTimeStamp;         ///< ���ݽ���ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< 1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    long long           PacketTimeStamp;        ///< ���ݰ�ͷʱ��YYYYMMDDHHMMSSMMM
    int                 Time;                   ///< ��������ʱ��, ���¶���ʱ�䣨���룩;143025001 ��ʾ 14:30:25.001
    char                Symbol[SYMBOL_LEN];     ///< ֤ȯ����, 
    double              PreClosePrice;          ///< ���ռ�, 
    double              OpenPrice;              ///< ���̼�, 
    double              HighPrice;              ///< ��߼�, 
    double              LowPrice;               ///< ��ͼ�, 
    double              LastPrice;              ///< �ּ�, 
    double              ClosePrice;             ///< �����̼�, 
    char                TradeStatus[6];         ///< ��ǰƷ�ֽ���״̬,
    char                SecurityPhaseTag[PHRASE_TAG_LEN];   ///< ��ǰƷ��״̬
                                                            ///< ���ֶ�Ϊ8λ�ַ���������ÿλ��ʾ�ض��ĺ��壬�޶�������ո�
                                                            ///< ��1λ����S����ʾ����������ǰ��ʱ�Σ���C����ʾ���Ͼ���ʱ�Σ���T����ʾ��������ʱ�Σ���E����ʾ����ʱ�Σ���P����ʾ��Ʒͣ�ƣ���M����ʾ�ɻָ����׵��۶�ʱ�Σ����м��Ͼ��ۣ�����N����ʾ���ɻָ����׵��۶�ʱ�Σ���ͣ���������У�����U����ʾ���̼��Ͼ���ʱ�Ρ�
                                                            ///< ��2λ����0����ʾ�˲�Ʒ�����������ף���1����ʾ�˲�Ʒ���������ף���������ո�
                                                            ///< ��3λ����0����ʾδ���У���1����ʾ�����С�
                                                            ///< ��4λ����0����ʾ�˲�Ʒ�ڵ�ǰʱ�β����ܽ����¶����걨����1�� ��ʾ�˲�Ʒ�ڵ�ǰʱ�οɽ��ܽ����¶����걨����������ո�
    unsigned long long  TotalNo;                ///< �ɽ�����, 
    unsigned long long  TotalVolume;            ///< �ɽ�����, ��Ʊ����;Ȩ֤����;ծȯ����
    double              TotalAmount;            ///< �ɽ��ܶ�, ��Ԫ��
    unsigned long long  TotalBuyOrderVolume;    ///< ί����������, ��Ʊ����;Ȩ֤����;ծȯ����
    double              WtAvgBuyPrice;          ///< ��Ȩƽ��ί���, ��Ԫ��
    double              BondWtAvgBuyPrice;      ///< ծȯ��Ȩƽ��ί���, ��Ԫ��
    unsigned long long  TotalSellOrderVolume;   ///< ί����������, 
    double              WtAvgSellPrice;         ///< ��Ȩƽ��ί����, ��Ԫ��
    double              BondWtAvgSellPrice;     ///< ծȯ��Ȩƽ��ί����, 
    double              IOPV;                   ///< ETF ��ֵ��ֵ, 
    int                 ETFBuyNo;               ///< ETF �깺����, 
    long long           ETFBuyVolume;           ///< ETF �깺��, 
    double              ETFBuyAmount;           ///< ETF �깺��, 
    int                 ETFSellNo;              ///< ETF ��ر���, 
    long long           ETFSellVolume;          ///< ETF �����, 
    double              ETFSellAmount;          ///< ETF ��ض�, 
    double              YTM;                    ///< ծȯ����������, 
    long long           TotalWarrantExecVol;    ///< Ȩִ֤�е�������, 
    double              WarrantDownLimit;       ///< Ȩ֤��ͣ�۸�, ��Ԫ��
    double              WarrantUpLimit;         ///< Ȩ֤��ͣ�۸�, ��Ԫ��
    int                 WithdrawBuyNo;          ///< ���볷������, 
    long long           WithdrawBuyVolume;      ///< ���볷����, 
    double              WithdrawBuyAmount;      ///< ���볷����, 
    int                 WithdrawSellNo;         ///< ������������, 
    long long           WithdrawSellVolume;     ///< ����������, 
    double              WithdrawSellAmount;     ///< ����������, 
    int                 TotalBuyNo;             ///< �����ܱ���, 
    int                 TotalSellNo;            ///< �����ܱ���, 
    int                 MaxBuyDuration;         ///< ����ɽ����ȴ�ʱ��, 
    int                 MaxSellDuration;        ///< �����ɽ����ȴ�ʱ��, 
    int                 BuyOrderNo;             ///< ��ί�м�λ��, 
    int                 SellOrderNo;            ///< ����ί�м�λ��, 
    unsigned int        SellLevelNo;            ///< ���̼�λ����, 10�����飬����ʱ����
    union
    {
        BuySellLevelInfo3    SellLevel[LEVEL_TEN];          ///< ʮ��������
        struct
        {
                double              SellPrice01;            ///< ������, 
                unsigned long long  SellVolume01;           ///< ������, 
                unsigned int        TotalSellOrderNo01;     ///< ������ί�б���, 
                double              SellPrice02;            ///< ������, 
                unsigned long long  SellVolume02;           ///< ������, 
                unsigned int        TotalSellOrderNo02;     ///< ������ί�б���, 
                double              SellPrice03;            ///< ������, 
                unsigned long long  SellVolume03;           ///< ������, 
                unsigned int        TotalSellOrderNo03;     ///< ������ί�б���, 
                double              SellPrice04;            ///< ������, 
                unsigned long long  SellVolume04;           ///< ������, 
                unsigned int        TotalSellOrderNo04;     ///< ������ί�б���, 
                double              SellPrice05;            ///< ������, 
                unsigned long long  SellVolume05;           ///< ������, 
                unsigned int        TotalSellOrderNo05;     ///< ������ί�б���, 
                double              SellPrice06;            ///< ������, 
                unsigned long long  SellVolume06;           ///< ������, 
                unsigned int        TotalSellOrderNo06;     ///< ������ί�б���, 
                double              SellPrice07;            ///< ������, 
                unsigned long long  SellVolume07;           ///< ������, 
                unsigned int        TotalSellOrderNo07;     ///< ������ί�б���, 
                double              SellPrice08;            ///< ������, 
                unsigned long long  SellVolume08;           ///< ������, 
                unsigned int        TotalSellOrderNo08;     ///< ������ί�б���, 
                double              SellPrice09;            ///< ������, 
                unsigned long long  SellVolume09;           ///< ������, 
                unsigned int        TotalSellOrderNo09;     ///< ������ί�б���, 
                double              SellPrice10;            ///< ������, 
                unsigned long long  SellVolume10;           ///< ������, 
                unsigned int        TotalSellOrderNo10;     ///< ������ί�б���, 
        };
    };
    unsigned int        SellLevelQueueNo01;                 ///< ��һ����ʾί�б���, Ϊ 0 ��ʾ����ʾ
    unsigned int        SellLevelQueue[ORDER_LEVEL_FIFTY];  ///< ��1������, ��Ƶ���ݱ��棬�ȴ涩������,ֻ��һ���д����ݣ�50��������ʱ����
    unsigned int        BuyLevelNo;                         ///< ���̼�λ����, 10�����飬����ʱ����
    union
    {
        BuySellLevelInfo3    BuyLevel[LEVEL_TEN];           ///< ʮ��������
        struct
        {
            double              BuyPrice01;                 ///< �����, 
            unsigned long long  BuyVolume01;                ///< ������, ��Ʊ����;Ȩ֤����;ծȯ����
            unsigned int        TotalBuyOrderNo01;          ///< ������ί�б���, 
            double              BuyPrice02;                 ///< �����, 
            unsigned long long  BuyVolume02;                ///< ������, 
            unsigned int        TotalBuyOrderNo02;          ///< ������ί�б���, 
            double              BuyPrice03;                 ///< �����, 
            unsigned long long  BuyVolume03;                ///< ������, 
            unsigned int        TotalBuyOrderNo03;          ///< ������ί�б���, 
            double              BuyPrice04;                 ///< �����, 
            unsigned long long  BuyVolume04;                ///< ������, 
            unsigned int        TotalBuyOrderNo04;          ///< ������ί�б���, 
            double              BuyPrice05;                 ///< �����, 
            unsigned long long  BuyVolume05;                ///< ������, 
            unsigned int        TotalBuyOrderNo05;          ///< ������ί�б���, 
            double              BuyPrice06;                 ///< �����, 
            unsigned long long  BuyVolume06;                ///< ������, 
            unsigned int        TotalBuyOrderNo06;          ///< ������ί�б���, 
            double              BuyPrice07;                 ///< �����, 
            unsigned long long  BuyVolume07;                ///< ������, 
            unsigned int        TotalBuyOrderNo07;          ///< ������ί�б���, 
            double              BuyPrice08;                 ///< �����, 
            unsigned long long  BuyVolume08;                ///< ������, 
            unsigned int        TotalBuyOrderNo08;          ///< ������ί�б���, 
            double              BuyPrice09;                 ///< �����, 
            unsigned long long  BuyVolume09;                ///< ������, 
            unsigned int        TotalBuyOrderNo09;          ///< ������ί�б���, 
            double              BuyPrice10;                 ///< �����, 
            unsigned long long  BuyVolume10;                ///< ������, 
            unsigned int        TotalBuyOrderNo10;          ///< ������ί�б���, 
        };
    };
    unsigned int        BuyLevelQueueNo01;                  ///< ��һ����ʾί�б���, Ϊ 0 ��ʾ����ʾ
    unsigned int        BuyLevelQueue[ORDER_LEVEL_FIFTY];   ///< ��1������, ��Ƶ���ݱ��棬�ȴ涩������,ֻ��һ���д����ݣ�50��������ʱ����
};

/// �Ͻ���L2ָ������
struct SSEL2_Index
{
    int                 LocalTimeStamp;         ///< ���ݽ���ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< 1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    long long           PacketTimeStamp;        ///< ���ݰ�ͷʱ��YYYYMMDDHHMMSSMMM
    int                 Time;                   ///< ��������ʱ��(����), 143025000 ��ʾ 14:30:25000
    int                 TradeTime;              ///< �ɽ�ʱ��(����),
    char                Symbol[SYMBOL_LEN];     ///< ֤ȯ����, 
    double              PreClosePrice;          ///< ���ռ�, 
    double              OpenPrice;              ///< ���̼�, 
    double              TotalAmount;            ///< �ɽ��ܶ�, 
    double              HighPrice;              ///< ��߼�, 
    double              LowPrice;               ///< ��ͼ�, 
    double              LastPrice;              ///< �ּ�, 
    unsigned long long  TotalVolume;            ///< �ɽ�����, ��
    double              ClosePrice;             ///< �����̼�, 
};

/// �Ͻ���L2��ʳɽ�
struct SSEL2_Transaction
{
    int                 LocalTimeStamp;         ///< ���ݽ���ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< 1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    long long           PacketTimeStamp;        ///< ���ݰ�ͷʱ��YYYYMMDDHHMMSSMMM
    int                 TradeTime;              ///< �ɽ�ʱ��(����), 14302506 ��ʾ14:30:25.06
    unsigned int        RecID;                  ///< ҵ������, �� 1 ��ʼ���� TradeChannel����
    int                 TradeChannel;           ///< �ɽ�ͨ��, 
    char                Symbol[SYMBOL_LEN];     ///< ֤ȯ����, 
    double              TradePrice;             ///< �ɽ��۸�, 
    unsigned int        TradeVolume;            ///< �ɽ�����, ��Ʊ����;Ȩ֤����;ծȯ����
    double              TradeAmount;            ///< �ɽ����, 
    long long           BuyRecID;               ///< �򷽶�����, 
    long long           SellRecID;              ///< ����������, 
    char                BuySellFlag;            ///< �����̱�־, B �C ����,������;S �C ����,������;N �C δ֪
};

/// �Ͻ���L2���⼯�Ͼ���
struct SSEL2_Auction
{
    int                 LocalTimeStamp;         ///< ���ݽ���ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< 1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    long long           PacketTimeStamp;        ///< ���ݰ�ͷʱ��YYYYMMDDHHMMSSMMM
    int                 Time;                   ///< ��������ʱ��, 143025001 ��ʾ 14:30:25.001
    char                Symbol[SYMBOL_LEN];     ///< ֤ȯ����, 
    double              OpenPrice;              ///< ���⿪�̲ο���, 
    long long           AuctionVolume;          ///< ����ƥ����, 
    long long           LeaveVolume;            ///< ����δƥ����, 
    char                Side;                   ///< ��������, 0=��δƥ�������������ߵ�δƥ������Ϊ 0;1=����δƥ����������δƥ����=0;2=������δƥ��������δƥ����=0
};

/// �Ͻ���L2�г�����
struct SSEL2_Overview
{
    int                 LocalTimeStamp;         ///< ���ݽ���ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< 1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    long long           PacketTimeStamp;        ///< ���ݰ�ͷʱ��YYYYMMDDHHMMSSMMM
    int                 Time;                   ///< ��������ʱ��, 143025001 ��ʾ 14:30:25.001
    char                Symbol[SYMBOL_LEN];     ///< ֤ȯ����, 
    int                 MarketTime;             ///< �г�ʱ��, �ٷ�֮һ��
    int                 TradeDate;              ///< �г�����, 
};

/// �Ͻ���������Ȩ��̬����
struct SSEIOL1_Static
{
    int                 LocalTimeStamp;                           ///< ���ݽ���ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];        ///< 1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    long long           PacketTimeStamp;                          ///< ���ݰ�ͷʱ��YYYYMMDDHHMMSSMMM
    char                Symbol[SYMBOL_LEN];                       ///< ֤ȯ���루��Լ���룩, ��Լ��Ȩ��Ʒ���룬8λ�ַ�;Ψһ��ʾ
    char                ContractID [19];                          ///< ��Լ���״��� , ��Լ���״���17λ��������˳���д��1����1����6λΪ���֣�ȡ���֤ȯ���룬�繤������601398��ȡ��601398����2����7λΪC(Call)����P(Put)���ֱ��ʾ�Ϲ���Ȩ�����Ϲ���Ȩ��3����8��9λ��ʾ������ݣ�4����10��11λ��ʾ�����·ݣ�5����12λ�ڳ���Ϊ��M������ʾ�·ݺ�Լ������Լ�״ε����󣬡�M���޸�Ϊ ��A�����Ա�ʾ�ú�Լ��������һ�Σ��緢���ڶ��ε�������A���޸�Ϊ��B������M���޸�Ϊ ��A�����Դ����ƣ�6����13��17λ��ʾ��Ȩ��Ȩ�۸�.����λ����
    char                SecurityName[SECURITY_NAME_LEN];    ///< ��Ȩ��Լ��ƣ�֤ȯ���ƣ� , 
    char                SymbolUnderlying[SYMBOL_LEN];             ///< ����֤ȯ����, 
    char                NameUnderlying[SECURITY_NAME_LEN];        ///< ����֤ȯ���� , 
    char                UnderlyingType [5];                       ///< ���֤ȯ���� , EBS �C ETF�� ASH �C A�� 
    char                OptionType;                               ///< ��Ȩ����, ��Ϊŷʽ��Ȩ�����ֶ�Ϊ��E������Ϊ��ʽ��Ȩ�����ֶ�Ϊ��A�� 
    char                CallOrPut;                                ///< �Ϲ��Ϲ� , �Ϲ������ֶ�Ϊ��C������Ϊ�Ϲ������ֶ�Ϊ��P�� 
    long long           ContractMultiplierUnit;                   ///< ��Լ��λ , ������Ȩ��Ϣ������ĺ�Լ��λ, һ�������� 
    double              ExercisePrice;                            ///< ��Ȩ��Ȩ�� , ������Ȩ��Ϣ���������Ȩ��Ȩ�ۣ��Ҷ��룬��ȷ����;��Ȩ�۸������ȡ�������뷽ʽ����Ʊ������λС����ETF������λС����
    int                 StartDate;                                ///< �׸������� , ��Ȩ�׸�������,YYYYMMDD (��*10000+��*100+��)
    int                 EndDate;                                  ///< ������� , ��Ȩ�������/��Ȩ�գ�YYYYMMDD 
    int                 ExerciseDate;                             ///< ��Ȩ��Ȩ�� , ��Ȩ��Ȩ�գ�YYYYMMDD 
    int                 DeliveryDate;                             ///< ��Ȩ������, ��Ȩ�����գ�Ĭ��Ϊ��Ȩ�յ���һ�������գ�YYYYMMDD
    int                 ExpireDate;                               ///< ��Ȩ������ , ��Ȩ�����գ�YYYYMMDD 
    char                Version;                                  ///< ��Լ�汾�� , ��Ȩ��Լ�İ汾�š��¹Һ�Լ�ǡ�1�� 
    unsigned int        TotalLongPosition;                        ///< ��Լδƽ���� , ��λ�� ���ţ� ��ֵΪ���ճֲ�����Գ�֮��ֲ����ݡ�
    double              PreClosePrice;                            ///< ���ռ�, �������̼ۣ�������Ȩ��Ϣ��Ϊ����������̼۸��������յ��ļ��У���д�ο��۸񣩣��Ҷ��룬��ȷ���� 
    double              PreSettlePrice;                           ///< �����, ���ս���ۣ��Ҷ��룬��λ��Ԫ 
    double              PreClosePriceUnderlying;                  ///< ������ռ�, ��Ȩ���֤ȯ��Ȩ��Ϣ�������ǰ���̼۸��Ҷ��룬��λ��Ԫ 
    char                UpDownLimitType;                          ///< �ǵ����������� , ��N����ʾ���׹���3.4.13�涨�����ǵ����������ͻ���Ȩ֤����취��22���涨 ��R����ʾ���׹���3.4.15��3.4.16�涨�����ǵ����������� 
    double              PriceUpLimit;                             ///< �Ƿ��۸�, ������Ȩ��ͣ�۸񣬾�ȷ���� 
    double              PriceDownLimit;                           ///< �����۸�, ������Ȩ��ͣ�۸񣬾�ȷ���� 
    double              MarginUnit;                               ///< ��λ��֤�� , ���ճ���һ�ź�Լ����Ҫ�ı�֤���� ������ȷ���� 
    double              MarginRatioParam1;                        ///< ��֤��������һ , ��֤������������λ��% 
    double              MarginRatioParam2;                        ///< ��֤���������� , ��֤������������λ��% 
    unsigned int        RoundLot;                                 ///< ������ , һ�ֵ��ڼ��ź�Լ 
    long long           LmtOrdFloor;                              ///< �޼��걨���� , �����޼��걨���걨�������ޡ� 
    long long           LmtOrdCeiling;                            ///< �޼��걨���� , �����޼��걨���걨�������ޡ� 
    long long           MktOrdFloor;                              ///< �м��걨���� , �����м��걨���걨�������ޡ� 
    long long           MktOrdCeiling;                            ///< �м��걨���� , �����м��걨���걨�������ޡ� 
    double              TickSize;                                 ///< ��С���۵�λ, ��λ��Ԫ����ȷ��0.1�壩
    char                SecurityStatusFlag[8];                    ///< ��Ȩ��Լ״̬, ���ֶ�Ϊ8λ�ַ���������ÿλ��ʾ�ض��ĺ��壬�޶�������ո�
                                                                  ///< ��1λ����0����ʾ�ɿ��֣���1����ʾ�����������֣��������ҿ��֣������뿪�֡�
                                                                  ///< ��2λ����0����ʾδ����ͣ�ƣ���1����ʾ����ͣ�ơ�
                                                                  ///< ��3λ����0����ʾδ�ٽ������գ���1����ʾ���뵽���ղ���5�������ա�
                                                                  ///< ��4λ����0����ʾ����δ����������1����ʾ���5���������ں�Լ������������
                                                                  ///< ��5λ����A����ʾ�����¹��Ƶĺ�Լ����E����ʾ�����ĺ�Լ����D����ʾ����ժ�Ƶĺ�Լ��
                                                                  ///< ��6λ����1����ʾ��Լֻ�ܽ��п�ʽ�Ϳ��ʽ����ϲ��ԣ���0����ʾ���Խ������е���ϲ���
    int                 AutoSplitDate;                            ///< �����ڱ�ʾ��ֱ�۲���ϲ��Ե��ڽ�������ڣ�YYYYMMDD�� ����E-2�󲨶��ӹҵĺ�Լ�����ֶ���ΪE-2�ա������յ���ʱ�����ֶ���Ϣ�Զ�ͬ��������
    int                 TradeDate;                                ///< �г�����,������

};

/// �Ͻ���������Ȩʵʱ����
struct SSEIOL1_Quotation
{
    int                 LocalTimeStamp;         ///< ���ݽ���ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< 1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    long long           PacketTimeStamp;        ///< ���ݰ�ͷʱ��YYYYMMDDHHMMSSMMM
    int                 Time;                   ///< ��������ʱ��, 143025001��ʾ 14:30:25.001;�����Ȩ��Լ�Ĳ�Ʒ����Ϊ��00000000�������ʾ����ʱ�䣬��ʽΪHHMMSSMMM;�гɽ�ʱ�Ż�仯
    char                Symbol[SYMBOL_LEN];     ///< ��Լ���루֤ȯ���룩, ��Ȩ��Լ�Ĳ�Ʒ����;Ψһ��ʾ
    double              PreSettlePrice;         ///< �����, 4 decimal places
    double              SettlePrice;            ///< �����, 4 decimal places
    double              OpenPrice;              ///< ���̼�, 4 decimal places
    double              HighPrice;              ///< ��߼� , 4 decimal places
    double              LowPrice;               ///< ��ͼ�, 4 decimal places
    double              LastPrice;              ///< �ּ�, 4 decimal places
    double              ClosePrice;             ///< ���̼�
    double              AuctionPrice;           ///< �������жϲο���, 4 decimal places
    long long           AuctionVolume;          ///< �������ж�����ƥ����, 
    unsigned long long  TotalPosition;          ///< �ֲ���, ��λ�� ���ţ�������ʱ�����˴��ֲܳ���ֵΪ�ֲ��������֮ǰ����ֵ;���̺�Ϊ����������δƽ�ֺ�Լ������
    unsigned int        SellLevelNo;            ///< ���̼�λ����, �嵵:����5���յ�λ��0���
    union
    {
        BuySellLevelInfo    SellLevel[LEVEL_FIVE];      ///< �嵵������
        struct  
        {
            double              SellPrice01;            ///< ������, ��10069<5ʱ������5  ����������֪�����Ϊ0
            unsigned long long  SellVolume01;           ///< ������, ��10069<5ʱ������5  ����������֪�����Ϊ0
            double              SellPrice02;            ///< ������, ��10069<5ʱ������5  ����������֪�����Ϊ0
            unsigned long long  SellVolume02;           ///< ������, ��10069<5ʱ������5  ����������֪�����Ϊ0
            double              SellPrice03;            ///< ������, ��10069<5ʱ������5  ����������֪�����Ϊ0
            unsigned long long  SellVolume03;           ///< ������, ��10069<5ʱ������5  ����������֪�����Ϊ0
            double              SellPrice04;            ///< ������, ��10069<5ʱ������5  ����������֪�����Ϊ0
            unsigned long long  SellVolume04;           ///< ������, ��10069<5ʱ������5  ����������֪�����Ϊ0
            double              SellPrice05;            ///< ������, ��10069<5ʱ������5  ����������֪�����Ϊ0
            unsigned long long  SellVolume05;           ///< ������, ��10069<5ʱ������5  ����������֪�����Ϊ0
        };
    };
    unsigned int            BuyLevelNo;                  ///< ���̼�λ����, �嵵:����5���յ�λ��0���
    union
    {
        BuySellLevelInfo    BuyLevel[LEVEL_FIVE];        ///< �嵵������
        struct  
        {
            double              BuyPrice01;             ///< �����, ��10068<5ʱ������5����������֪�����Ϊ0
            unsigned long long  BuyVolume01;            ///< ������, ��10068<5ʱ������5����������֪�����Ϊ0
            double              BuyPrice02;             ///< �����, ��10068<5ʱ������5����������֪�����Ϊ0
            unsigned long long  BuyVolume02;            ///< ������, ��10068<5ʱ������5����������֪�����Ϊ0
            double              BuyPrice03;             ///< �����, ��10068<5ʱ������5����������֪�����Ϊ0
            unsigned long long  BuyVolume03;            ///< ������, ��10068<5ʱ������5����������֪�����Ϊ0
            double              BuyPrice04;             ///< �����, ��10068<5ʱ������5����������֪�����Ϊ0
            unsigned long long  BuyVolume04;            ///< ������, ��10068<5ʱ������5����������֪�����Ϊ0
            double              BuyPrice05;             ///< �����, ��10068<5ʱ������5����������֪�����Ϊ0
            unsigned long long  BuyVolume05;            ///< ������, ��10068<5ʱ������5����������֪�����Ϊ0
        };
    };
    unsigned long long  TotalVolume;            ///< �ɽ�����, Trade volume of this security.�����Ȩ��Լ�Ĳ�Ʒ����Ϊ��00000000�������ʾ�������ڣ���ʽΪYYYYMMDD
    double              TotalAmount;            ///< �ɽ����, 2 decimal places
    char                SecurityPhaseTag[PHRASE_TAG_LEN];    ///< ���ֶ�Ϊ4λ�ַ���������ÿλ��ʾ�ض��ĺ��壬�޶�������ո�
                                                             ///< ��1λ����S����ʾ����������ǰ��ʱ�Σ���C����ʾ���Ͼ���ʱ�Σ���T����ʾ��������ʱ�Σ���B����ʾ����ʱ�Σ���E����ʾ����ʱ�Σ���V����ʾ�������жϣ���P����ʾ��ʱͣ�ơ���U����ʾ���̼��Ͼ��ۡ�
                                                             ///<        ��M����ʾ�ɻָ����׵��۶ϣ����м��Ͼ��ۣ�����N����ʾ���ɻָ����׵��۶ϣ���ͣ���������У�
                                                             ///< ��2λ����0����ʾδ����ͣ�ƣ���1����ʾ����ͣ�ơ���Ԥ��������ո񣩡�
                                                             ///< ��3λ����0����ʾ�����ƿ��֣���1����ʾ���Ʊ��ҿ��֣���2����ʾ�������֣���3����ʾ�����������֡����ҿ��֣���4����ʾ�������뿪�֣���5����ʾ�������뿪�֡����ҿ��֣���6����ʾ�������뿪�֡��������֣���7����ʾ�������뿪�֡��������֡����ҿ��֡�
                                                             ///< ��4λ����0����ʾ�˲�Ʒ�ڵ�ǰʱ�β����ܽ����¶����걨����1����ʾ�˲�Ʒ�ڵ�ǰʱ�οɽ��ܽ����¶����걨��

};

/// ���Ͼ����ǵ���
struct AuctionUpDown{
    double          LimitUpRate;                     ///< ���Ͼ������Ƿ��ȣ�3λС��
    double          LimitDownRate;                   ///< ���Ͼ����µ����ȣ�3λС��
    double          LimitUpAbsolute;                 ///< ���Ͼ��������޼ۣ�4λС��
    double          LimitDownAbsolute;               ///< ���Ͼ����µ��޼ۣ�4λС��
    double          AuctionUpDownRate;               ///< ���Ͼ�����Ч��Χ�ǵ����ȣ�3λС��
    double          AuctionUpDownAbsolute;           ///< ���Ͼ�����Ч��Χ�ǵ��۸�4λС��
};

/// ���L1ʵʱ����
struct SZSEL1_Quotation
{
    int                 LocalTimeStamp;                     ///< ���ݽ���ʱ��
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< ����Դ��־. 1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    long long           Time;                               ///< ��������ʱ��YYYYMMDDHHMMSSsss
    char                Symbol[SYMBOL_LEN];                 ///< ֤ȯ����. ֤ȯ������395��ͷ�ļ�¼Ϊ�ɽ���ͳ��ָ���¼
    char                SymbolSource[SYMBOLSOURCE_LEN];     ///< ֤ȯ����Դ��102 = ����֤ȯ������,103=��۽�����
    double              PreClosePrice;                      ///< ���ռ�.
    double              OpenPrice;                          ///< ���̼�.
    double              LastPrice;                          ///< �ּ�.
    double              HighPrice;                          ///< ��߼�. 
    double              LowPrice;                           ///< ��ͼ�.
    double              PriceUpLimit;                       ///< ��ͣ��.
    double              PriceDownLimit;                     ///< ��ͣ��.
    double              PriceUpdown1;                       ///< ����һ
    double              PriceUpdown2;                       ///< ������
    unsigned long long  TotalNo;                            ///< �ܳɽ�����. ֤ȯ������395��ͷ�ļ�¼Ϊ�ɽ���ͳ��ָ���¼�����ֶα�ʾ������Ӧ�ĳɽ�����
    double              TotalVolume;                        ///< �ɽ�����. ֤ȯ������395��ͷ�ļ�¼Ϊ�ɽ���ͳ��ָ���¼�����ֶα�ʾ������Ӧ�ĳɽ���λ��
    double              TotalAmount;                        ///< �ɽ��ܶ�. ֤ȯ������395��ͷ�ļ�¼Ϊ�ɽ���ͳ��ָ���¼�����ֶα�ʾ������Ӧ�ĳɽ������е�λ��Ϊ����ҡ�
    double              ClosePrice;                         ///< �����̼� ��ǰ�����и�Ϊ0ֵ���̺��ɱ��к󷢵ľ�̬���ݣ��ֻ�֤ȯ��������(cashsecurityclosemd.xml)������䣬��֤ȯ���������䡣�޿�ȡֵ�Ĵ��룬��0ֵ
    char                SecurityPhaseTag[8];                ///< ��ǰƷ�ֽ���״̬. ��Ʒ�����Ľ��׽׶δ��룺
                                                            ///<  �� 0 λ��S=����(����ǰ) O=���̼��Ͼ��� T=����     B=����
                                                            ///<  C=���̼��Ͼ��� E=�ѱ��� H=��ʱͣ�� A=�̺���
                                                            ///<  V=�������ж�
                                                            ///<  �� 1 λ��0=����״̬ 1=ȫ��ͣ��
    double              PERatio1;                           ///< ��ӯ��1.
    double              PERatio2;                           ///< ��ӯ��2.
    double              NAV;                                ///< ���� T-1 �վ�ֵ
    double              IOPV;                               ///< ����ʵʱ�ο���ֵ(���� ETF�� IOPV)
    double              PremiumRate;                        ///< Ȩ֤�����
    unsigned int        SampleNo;                           ///< ��������    
    union
    {
        SZSE_BuySellLevelInfo    SellLevel[LEVEL_FIVE];      ///< �嵵������
        struct  
        {
            double              SellPrice01;            ///< ������һ
            double              SellVolume01;           ///< ������һ
            double              SellPrice02;            ///< �����۶�
            double              SellVolume02;           ///< ��������
            double              SellPrice03;            ///< ��������
            double              SellVolume03;           ///< ��������
            double              SellPrice04;            ///< ��������
            double              SellVolume04;           ///< ��������
            double              SellPrice05;            ///< ��������
            double              SellVolume05;           ///< ��������
        };
    };
    union
    {
        SZSE_BuySellLevelInfo    BuyLevel[LEVEL_FIVE];        ///< �嵵������
        struct  
        {
            double              BuyPrice01;             ///< �����һ
            double              BuyVolume01;            ///< ������һ
            double              BuyPrice02;             ///< ����۶�
            double              BuyVolume02;            ///< ��������
            double              BuyPrice03;             ///< �������
            double              BuyVolume03;            ///< ��������
            double              BuyPrice04;             ///< �������
            double              BuyVolume04;            ///< ��������
            double              BuyPrice05;             ///< �������
            double              BuyVolume05;            ///< ��������
        };
    };

    double              WtAvgRate;                          ///< ʵʱ��Ȩƽ������    ��Ѻʽ�ع���Ʒʵʱ�������������ֶ�
    double              WtAvgRateUpdown;                    ///< ��Ȩƽ�������ǵ�BP
    double              PreWtAvgRate;                       ///< �����̼�Ȩƽ������
};

/// ���������Ϣͷ
struct SZSEL1_BulletinHead
{
    int             LocalTimeStamp;                     ///< ���ݽ���ʱ��
    char            QuotationFlag[QUOTATION_FLAG_LEN];  ///< ����Դ��־����1λ��Ӧ����1����ʾ���Ϻ��ϻ��������Դ����2����ʾ���ڸ�����������Դ
    long long       Time;                               ///< ��������ʱ��YYYYMMDDHHMMSSsss
    unsigned int    SetID;                              ///< Ƶ������
    char            NewsID[12];                         ///< �����ʶ, �մ�������ժҪ, ���ظ�����. ͨ��ժҪ��ȷ�������Ƿ�����©
    char            Headline[128];                      ///< �������
    char            RawDataFormat[8];                   ///< ���������ݸ�ʽ
    unsigned int    RawDataLength;                      ///< ���������ݳ���
};

/// ���������Ϣ
struct SZSEL1_Bulletin
{
    SZSEL1_BulletinHead RawHead;                        ///< ����ͷ
    char                RawData[1];                     ///< ����������,������RawDataLengthȷ��
};

/// ���L2��̬����
struct SZSEL2_Static
{
    int             LocalTimeStamp;                     ///< ���ݽ���ʱ��  ��ʽΪ��HHMMSSsss
    char            QuotationFlag[QUOTATION_FLAG_LEN];  ///< ����Դ��־����1λ��Ӧ����1����ʾ���Ϻ��ϻ��������Դ����2����ʾ���ڸ�����������Դ
    char            Symbol[SYMBOL_LEN];                 ///< ֤ȯ���룬8���ַ�
    char            SecurityName[40];                   ///< ֤ȯ���ƣ����ܰ��������ַ�����ʾ��� 40�� UTF-8 �ַ�
    char            SymbolSource[SYMBOLSOURCE_LEN];     ///< ֤ȯ����Դ��102 = ����֤ȯ������
    char            SecurityEN[40];                     ///< ֤ȯӢ�ļ��
    char            ISINCode[12];                       ///< ISIN ����
    char            SymbolUnderlying[20];               ///< ����֤ȯ����
    char            UnderlyingSecurityIDSource[4];      ///< ����֤ȯ����Դ
    int             SecurityType;                       ///< ֤ȯ�����룬1���� A�ɣ� 2��С���Ʊ��3��ҵ���Ʊ��4���� B�ɣ�5��ծ �����ط�ծ����6��ҵծ��
                                                        ///< 7��˾ծ��8��תծ��9˽ļծ��10�ɽ���˽ļծ��11֤ȯ��˾�μ�ծ��12��Ѻʽ�ع���13�ʲ�֧��֤ȯ��
                                                        ///< 14���г���ƱETF��15���г�ETF��16�羳ETF��17���г�ʵ��ծȯETF��18�ֽ�ծȯETF��19�ƽ�ETF��20����ETF��
                                                        ///< 21��Ԥ�����ܸ�ETF;22(Ԥ��)��Ʒ�ڻ�ETF��23��׼LOF;24�ּ��ӻ���25���ʽ����26���������28Ȩ֤��
                                                        ///< 29������Ȩ��30ETF��Ȩ��33���ȹɣ�34֤ȯ��˾����ծ��35�ɽ�����˾ծ
    char            SecurityStatusTag[20];              ///< ֤ȯ״̬��ʶ�����ֶ�Ϊ20λ�ַ���������λ���ã���
                                                        ///< ÿλ��ʾ�ض��ĺ��壬��1����ʾλ����ҵ�����壬��0����ʾ��λ����ҵ�����塣��1λ��Ӧ����1����ʾͣ�ƣ�
                                                        ///< ��2λ��Ӧ����1����ʾ��Ȩ����3λ��Ӧ����1����ʾ��Ϣ����4λ��Ӧ����1����ʾST;��5λ��Ӧ����1����ʾ*ST;
                                                        ///< ��6λ��Ӧ����1����ʾ�������գ���7λ��Ӧ����1����ʾ��˾�����ʣ���8λ��Ӧ����1����ʾ�ָ��������գ�
                                                        ///< ��9λ��Ӧ����1����ʾ����ͶƱ����10λ��Ӧ����1����ʾ���������ڣ���12λ��Ӧ����1����ʾ�����ɷ����У�
                                                        ///< ��13λ��Ӧ����1����ʾ��Լ��������14λ��Ӧ����1����ʾ��ͣ���к�Э��ת�á�
    double          PreClosePrice;                      ///< �������̼ۣ�4λ��5λС��
    int             ListingDate;                        ///< ��������
    char            Currency[5];                        ///< ���֣�CNY = ����ң�HKD = �۱�
    double          ParValue;                           ///< ÿ����ֵ��4λС��
    double          IssuedVolume;                       ///< �ܷ�������2λС��
    double          OutstandingShare;                   ///< ��ͨ������2λС��
    char            IndustryType[5];                    ///< ��ҵ����
    double          PreYearEPS;                         ///< ����ÿ������4λС��
    double          YearEPS;                            ///< ����ÿ������4λС��
    char            OfferingFlag;                       ///< �չ���ת�ɡ���Ȩ����־����Ʊ��ҪԼ�չ���ծȯ�����ȹɣ�ת�ɻ��ۣ�Y=�ǣ�N=��
    double          NAV;                                ///< ����T-1���ۼƾ�ֵ��4λС��
    double          CouponRate;                         ///< Ʊ�����ʣ�4λС��
    double          IssuePrice;                         ///< ���ַ��мۣ�4λС��
    double          Interest;                           ///< ÿ��ԪӦ����Ϣ��8λС�������ȹɣ�0.0000 ��ʾ������Ϣ��
    int             InterestAccrualDate;                ///< ��Ϣ��
    int             MaturityDate;                       ///< ���ڽ�����
    double          ConversionPrice;                    ///< ��Ȩ�۸�4λС��
    double          ConversionRatio;                    ///< ��Ȩ������4λС��
    int             ConversionBeginDate;                ///< ��Ȩ��ʼ��
    int             ConversionEndDate;                  ///< ��Ȩ������
    char            CallOrPut;                          ///< �Ϲ��Ϲ���C = Call��P = Put
    char            WarrantClearingType;                ///< Ȩ֤���㷽ʽ��S = ֤ȯ���㣬C = �ֽ����
    double          ClearingPrice;                      ///< ����۸�������Ȩ֤��4λС��
    char            OptionType;                         ///< ��Ȩ���ͣ�A = ��ʽ��E = ŷʽ��B = ��Ľ��ʽ
    int             EndDate ;                           ///< �������
    int             ExpirationDays;                     ///< ��������
    char            DayTrading;                         ///< ��ת���ױ�־���Ƿ�֧�ֵ��ջأ�ת���ף�Y=֧�֣�N=��֧��
    char            GageFlag;                           ///< ��֤��֤ȯ��־���Ƿ����Ϊ���ʣ���ȯ�ɳ�ֱ�֤����֤ȯ��Y=�ǣ�N=��
    double          GageRate;                           ///< ����Ʒ�����ʣ�2λС��
    char            CrdBuyUnderlying;                   ///< ���ʱ�ı�־��Y=�ǣ�N=��
    char            CrdSellUnderlying;                  ///< ��ȯ��ı�־��Y=�ǣ�N=��
    char            CrdPriceCheckType[2];               ///< ��ۼ�鷽ʽ��0=����飬1=����������ɽ��ۣ�2=���������ռۣ�3=��������߽���4=��������ͽ���
    char            PledgeFlag;                         ///< ��Ѻ����־���Ƿ����Ѻ���:Y=�ǣ�N=��
    double          ContractMultiplier;                 ///< ծȯ�ۺϻع���׼ȯ������4λС��
    char            RegularShare[8];                    ///< ��Ӧ�ع���׼ȯ
    char            QualificationFlag;                  ///< Ͷ�����ʵ��Թ����־���Ƿ���Ҫ�Ը�֤ȯ��Ͷ�����ʵ��Թ���Y=�ǣ�N=��
    char            MarketMakerFlag;                    ///< �����̱�־����ʶ�Ƿ��������̣�Y=�ǣ�N=��
    double          RoundLot;                           ///< ������(2λ��ЧС��)������ĳһ֤ȯ�걨��ί�У���ί�������ֶα���Ϊ��֤ȯ������λ��������
    double          TickSize;                           ///< ��С���۵�λ��4λС��
    double          BuyQtyUpperLimit;                   ///< ���������ޣ�2λС��
    double          SellQtyUpperLimit;                  ///< ���������ޣ�2λС��
    double          BuyVolumeUnit;                      ///< ��������λ��ÿ����ί�е�ί��������������������λ����������2λС��
    double          SellVolumeUnit;                     ///< ��������λ��ÿ����ί�е�ί��������������������λ����������2λС��
    union{
        AuctionUpDown OTC[OTC_ELEMENT_LEN];
        struct  
        {
            double          LimitUpRateO;                     ///< ���̼��Ͼ������Ƿ��ȣ�3λС��
            double          LimitDownRateO;                   ///< ���̼��Ͼ����µ����ȣ�3λС��
            double          LimitUpAbsoluteO;                 ///< ���̼��Ͼ��������޼ۣ�4λС��
            double          LimitDownAbsoluteO;               ///< ���̼��Ͼ����µ��޼ۣ�4λС��
            double          AuctionUpDownRateO;               ///< ���̼��Ͼ�����Ч��Χ�ǵ����ȣ�3λС��
            double          AuctionUpDownAbsoluteO;           ///< ���̼��Ͼ�����Ч��Χ�ǵ��۸�4λС��
            double          LimitUpRateT;                     ///< �����������Ƿ��ȣ�3λС��
            double          LimitDownRateT;                   ///< ���������µ����ȣ�3λС��
            double          LimitUpAbsoluteT;                 ///< �������������޼ۣ�4λС��
            double          LimitDownAbsoluteT;               ///< ���������µ��޼ۣ�4λС��
            double          AuctionUpDownRateT;               ///< ����������Ч��Χ�ǵ����ȣ�3λС��
            double          AuctionUpDownAbsoluteT;           ///< ����������Ч��Χ�ǵ��۸�4λС��
            double          LimitUpRateC;                     ///< ���̼��Ͼ������Ƿ��ȣ�3λС��
            double          LimitDownRateC;                   ///< ���̼��Ͼ����µ����ȣ�3λС��
            double          LimitUpAbsoluteC;                 ///< ���̼��Ͼ��������޼ۣ�4λС��
            double          LimitDownAbsoluteC;               ///< ���̼��Ͼ����µ��޼ۣ�4λС��
            double          AuctionUpDownRateC;               ///< ���̼��Ͼ�����Ч��Χ�ǵ����ȣ�3λС��
            double          AuctionUpDownAbsoluteC;           ///< ���̼��Ͼ�����Ч��Χ�ǵ��۸�4λС��
        };
    };
    int             TradeDate;                          ///< �г�����,������
    char            QualificationClass[2];              ///< Ͷ�����ʵ��Թ������

    char            Attribute[2];                       ///< ��Ʊ����
    char            NoProfit;                           ///< �Ƿ���δӯ�� Y=�ǣ�δӯ�� N=����ӯ��
    char            WeightedVotingRights;               ///< �Ƿ����ͶƱȨ���� Y=���ڲ��� N=�޲���
};

typedef SZSEL2_Static SZSEL1_Static;

/// ���L2֤ȯ״̬
struct SZSEL2_Status
{
    int         LocalTimeStamp;                     ///< ���ݽ���ʱ��HHMMSSMMM
    char        QuotationFlag[QUOTATION_FLAG_LEN];  ///< ����Դ��־
    char        Symbol[SYMBOL_LEN];                 ///< ֤ȯ����
    char        SymbolSource[SYMBOLSOURCE_LEN];     ///< ֤ȯ����Դ��102=����֤ȯ��������103=��۽�����
    long long   Time;                               ///< ��������ʱ��YYYYMMDDHHMMSSMMM
    char        FinancialStatus[8];                 ///< A=���й�˾�����¶��ʾ,
                                                    ///< B=���й�˾�����¶��ʾ,
                                                    ///< ÿ���ֽڽ�ʾһ��״̬������ͬʱ��ʾ����״̬
    char        CrdBuyStatus;                       ///< ���������ʱ��֤ȯ��1= ����,0=��ͣ���ո�������
    char        CrdSellStatus;                      ///< ��������ȯ���֤ȯ��1= ����,0=��ͣ���ո�������
    char        SubscribeStatus;                    ///< ������ ETF�� LOF �ȿ���ʽ���𣬶��ڻƽ� ETF ��ָ�ֽ��깺��1= ��,0= �񣬿ո�������
    char        RedemptionStatus;                   ///< ������ ETF�� LOF �ȿ���ʽ���𣬶��ڻƽ� ETF ��ָ�ֽ���ؿ��ء�1= ��,0= �񣬿ո�������
    char        PurchasingStatus;                   ///< ���������Ϸ����Ϲ�����1= ��,0= �񣬿ո�������
    char        StockDiviStatus;                    ///< �����ڴ���ת�ɻ����ڵĿ�תծ��1= ��,0= �񣬿ո�������
    char        PutableStatus;                      ///< �����ڴ���ת�ɻ����ڵĿ�תծ��1= ��,0= �񣬿ո�������
    char        ExerciseStatus;                     ///< �����ڴ�����Ȩ�ڵ�Ȩ֤��1= ��,0=�񣬿ո�������
    char        GoldPurchase;                       ///< �����ڻƽ�ETFʵ���깺��1= ��,0= �񣬿ո�������
    char        GoldRedemption;                     ///< �����ڻƽ�ETFʵ����ء�1= ��,0= �񣬿ո�������
    char        AcceptedStatus;                     ///< �����ڴ���ҪԼ�չ��ڵĹ�Ʊ��1= ��,0= �񣬿ո�������
    char        ReleaseStatus;                      ///< �����ڴ���ҪԼ�չ��ڵĹ�Ʊ��1= ��,0= �񣬿ո�������
    char        CancStockDiviStatus;                ///< �����ڴ���ת�ɻ����ڵĿ�תծ��1= ��,0= �񣬿ո�������
    char        CancPutableStatus;                  ///< �����ڴ���ת�ɻ����ڵĿ�תծ��1= ��,0= �񣬿ո�������
    char        PledgeStatus;                       ///< ��������Ѻʽ�ع�����Ѻ���֤ȯ��1= ��,0= �񣬿ո�������
    char        RemovePledge;                       ///< ��������Ѻʽ�ع�����Ѻ���֤ȯ��1= ��,0= �񣬿ո�������
    char        VoteStatus;                         ///< ���������ȹɡ�1= ��,0= �񣬿ո�������
    char        StockPledgeRepo;                    ///< �����ڿɿ�չ��Ʊ��Ѻʽ�ع�ҵ���֤ȯ��1= ��,0= �񣬿ո�������
    char        DivideStatus;                       ///< �����ڷּ�����1= ��,0= �񣬿ո�������
    char        MergerStatus;                       ///< �����ڷּ�����1= ��,0= �񣬿ո�������
};

/// ���L2ʵʱ����
struct SZSEL2_Quotation
{
    int                 LocalTimeStamp;                     ///< ���ݽ���ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< 1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    long long           Time;                               ///< ��������ʱ��YYYYMMDDHHMMSSMMM
    char                Symbol[SYMBOL_LEN];                 ///< ֤ȯ����
    char                SymbolSource[SYMBOLSOURCE_LEN];     ///< ֤ȯ����Դ
    double              PreClosePrice;                      ///< �������̼�,4λС��
    double              OpenPrice;                          ///< ���̼�,6λС��
    double              LastPrice;                          ///< �ּ�,6λС��
    double              HighPrice;                          ///< ��߼�,6λС��
    double              LowPrice;                           ///< ��ͼ�,6λС��
    double              PriceUpLimit;                       ///< ��ͣ��,6λС��
    double              PriceDownLimit;                     ///< ��ͣ��,6λС��
    double              PriceUpdown1;                       ///< ����һ,6λС��
    double              PriceUpdown2;                       ///< ������,6λС��
    unsigned long long  TotalNo;                            ///< �ɽ�����
    double              TotalVolume;                        ///< �ɽ�����,2λС��
    double              TotalAmount;                        ///< �ɽ��ܽ��,4λС��
    double              ClosePrice;                         ///< �����̼ۣ�6λС��
    char                SecurityPhaseTag[PHRASE_TAG_LEN];   ///< ��ǰƷ�ֽ���״̬����Ʒ�����Ľ��׽׶δ��룺
                                                            ///< �� 0 λ��S=����������ǰ����O=���̼��Ͼ��ۣ� T=����,B=����
                                                            ///<          C=���̼��Ͼ���,E=�ѱ���,H=��ʱͣ��,A=�̺���,V=�������ж�;
                                                            ///< �� 1 λ��0=����״̬,1=ȫ��ͣ��"
    double              PERatio1;                           ///< ��ӯ�� 1,6λС��
    double              NAV;                                ///< ���� T-1 �վ�ֵ,6λС��
    double              PERatio2;                           ///< ��ӯ�� 2,6λС��
    double              IOPV;                               ///< ����ʵʱ�ο���ֵ,6λС��
    double              PremiumRate;                        ///< Ȩ֤�����,6λС��
    double              TotalSellOrderVolume;               ///< ί��������������Ч���۷�Χ�ڣ�2λС��
    double              WtAvgSellPrice;                     ///< ��Ȩƽ�������۸���Ч���۷�Χ�ڣ�,6λС��
    unsigned int        SellLevelNo;                        ///< ������λ�����۸��ɵ����ߣ�
    union
    {
        SZSE_BuySellLevelInfo3    SellLevel[LEVEL_TEN];      ///< ʮ��������
        struct
        {
            double              SellPrice01;            ///< ������,6λС��
            double              SellVolume01;           ///< ��������2λС��
            unsigned long long  TotalSellOrderNo01;     ///< ����λ��ί�б���
            double              SellPrice02;            ///< ������
            double              SellVolume02;           ///< ������
            unsigned long long  TotalSellOrderNo02;     ///< ����λ��ί�б���
            double              SellPrice03;            ///< ������
            double              SellVolume03;           ///< ������
            unsigned long long  TotalSellOrderNo03;     ///< ����λ��ί�б���
            double              SellPrice04;            ///< ������
            double              SellVolume04;           ///< ������
            unsigned long long  TotalSellOrderNo04;     ///< ����λ��ί�б���
            double              SellPrice05;            ///< ������
            double              SellVolume05;           ///< ������
            unsigned long long  TotalSellOrderNo05;     ///< ����λ��ί�б���
            double              SellPrice06;            ///< ������
            double              SellVolume06;           ///< ������
            unsigned long long  TotalSellOrderNo06;     ///< ����λ��ί�б���
            double              SellPrice07;            ///< ������
            double              SellVolume07;           ///< ������
            unsigned long long  TotalSellOrderNo07;     ///< ����λ��ί�б���
            double              SellPrice08;            ///< ������
            double              SellVolume08;           ///< ������
            unsigned long long  TotalSellOrderNo08;     ///< ����λ��ί�б���
            double              SellPrice09;            ///< ������
            double              SellVolume09;           ///< ������
            unsigned long long  TotalSellOrderNo09;     ///< ����λ��ί�б���
            double              SellPrice10;            ///< ������
            double              SellVolume10;           ///< ������
            unsigned long long  TotalSellOrderNo10;     ///< ����λ��ί�б���
        };
    };
    unsigned int        SellLevelQueueNo01;                 ///< ��һ����ʾί�б���
    double              SellLevelQueue[ORDER_LEVEL_FIFTY];  ///< ��ʾ��һ��ǰ50��ί�У�50�������㲹0��2λС��
    double              TotalBuyOrderVolume;                ///< ί��������������Ч���۷�Χ�ڣ���2λС��
    double              WtAvgBuyPrice;                      ///< ��Ȩƽ������۸���Ч���۷�Χ�ڣ�,6λС��
    unsigned int        BuyLevelNo;                         ///< ����λ�����۸��ɸ����ͣ�
    union
    {
        SZSE_BuySellLevelInfo3    BuyLevel[LEVEL_TEN];      ///< ʮ��������
        struct
        {
            double              BuyPrice01;             ///< �����,6λС��
            double              BuyVolume01;            ///< ������,2λС��
            unsigned long long  TotalBuyOrderNo01;      ///< ���λ��ί�б���
            double              BuyPrice02;             ///< �����
            double              BuyVolume02;            ///< ������
            unsigned long long  TotalBuyOrderNo02;      ///< ���λ��ί�б���
            double              BuyPrice03;             ///< �����
            double              BuyVolume03;            ///< ������
            unsigned long long  TotalBuyOrderNo03;      ///< ���λ��ί�б���
            double              BuyPrice04;             ///< �����
            double              BuyVolume04;            ///< ������
            unsigned long long  TotalBuyOrderNo04;      ///< ���λ��ί�б���
            double              BuyPrice05;             ///< �����
            double              BuyVolume05;            ///< ������
            unsigned long long  TotalBuyOrderNo05;      ///< ���λ��ί�б���
            double              BuyPrice06;             ///< �����
            double              BuyVolume06;            ///< ������
            unsigned long long  TotalBuyOrderNo06;      ///< ���λ��ί�б���
            double              BuyPrice07;             ///< �����
            double              BuyVolume07;            ///< ������
            unsigned long long  TotalBuyOrderNo07;      ///< ���λ��ί�б���
            double              BuyPrice08;             ///< �����
            double              BuyVolume08;            ///< ������
            unsigned long long  TotalBuyOrderNo08;      ///< ���λ��ί�б���
            double              BuyPrice09;             ///< �����
            double              BuyVolume09;            ///< ������
            unsigned long long  TotalBuyOrderNo09;      ///< ���λ��ί�б���
            double              BuyPrice10;             ///< �����
            double              BuyVolume10;            ///< ������
            unsigned long long  TotalBuyOrderNo10;      ///< ���λ��ί�б���
        };
    };
    unsigned int        BuyLevelQueueNo01;                  ///< ��һ����ʾί�б���
    double              BuyLevelQueue[ORDER_LEVEL_FIFTY];   ///< ��ʾ��һ��ǰ50��ί�У�50�������㲹0��2λС��

    double              WtAvgRate;                          ///< ʵʱ��Ȩƽ������    ��Ѻʽ�ع���Ʒʵʱ�������������ֶ�
    double              WtAvgRateUpdown;                    ///< ��Ȩƽ�������ǵ�BP
    double              PreWtAvgRate;                       ///< �����̼�Ȩƽ������

};

/// ���L2ָ������
struct SZSEL2_Index
{
    int                 LocalTimeStamp;                     ///< ���ݽ���ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< 1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    long long           Time;                               ///< ��������ʱ��YYYYMMDDHHMMSSMMM
    char                Symbol[SYMBOL_LEN];                 ///< ֤ȯ����
    char                SymbolSource[SYMBOLSOURCE_LEN];     ///< 102=����֤ȯ������, 103=��۽�����
    double              PreClosePrice;                      ///< ǰ����ָ��,6λС��
    double              OpenPrice;                          ///< ����ָ��,6λС��
    double              HighPrice;                          ///< ���ָ��,6λС��
    double              LowPrice;                           ///< ���ָ��,6λС��
    double              LastPrice;                          ///< ����ָ��,6λС��
    double              TotalAmount;                        ///< ���������Ӧָ���ĳɽ����,4λС��
    unsigned long long  TotalNo;                            ///< ���������Ӧָ���ĳɽ�����
    double              TotalVolume;                        ///< ���������Ӧָ���Ľ���������2λС��
    char                SecurityPhaseTag[PHRASE_TAG_LEN];   ///< ��ǰƷ�ֽ���״̬
    unsigned int        SampleNo;                           ///< ��������
};

/// ���L2���ί��
struct SZSEL2_Order
{
    int                 LocalTimeStamp;                     ///< ���ݽ���ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< 1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    unsigned int        SetID;                              ///< Ƶ������
    unsigned long long  RecID;                              ///< ��Ϣ��¼��:�� 1 ��ʼ������ͬһƵ������
    char                Symbol[SYMBOL_LEN];                 ///< ֤ȯ����
    char                SymbolSource[SYMBOLSOURCE_LEN];     ///< ֤ȯ����Դ
    long long           Time;                               ///< ί��ʱ��YYYYMMDDHHMMSSMMM
    double              OrderPrice;                         ///< ί�м۸�,4λС��
    double              OrderVolume;                        ///< ί������,2λС��
    char                OrderCode;                          ///< ��������1=�� 2=�� G=���� F=����
    char                OrderType;                          ///< �������1=�м� 2=�޼� U=��������
};

/// ���L2��ʳɽ�
struct SZSEL2_Transaction
{
    int                 LocalTimeStamp;                     ///< ���ݽ���ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< 1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    unsigned int        SetID;                              ///< ֤ȯ������
    unsigned long long  RecID;                              ///< ��Ϣ��¼�� �� 1 ��ʼ������ͬһƵ������
    unsigned long long  BuyOrderID;                         ///< ��ί������
    unsigned long long  SellOrderID;                        ///< ����ί������
    char                Symbol[SYMBOL_LEN];                 ///< ֤ȯ����
    char                SymbolSource[SYMBOLSOURCE_LEN];     ///< ֤ȯ����Դ
    long long           TradeTime;                          ///< �ɽ�ʱ��YYYYMMDDHHMMSSMMM
    double              TradePrice;                         ///< �ɽ��۸�,4λС��
    double              TradeVolume;                        ///< �ɽ�����,2λС��
    char                TradeType;                          ///< �ɽ����4=�������������Զ�����ִ�б��棻F=�ɽ����ɽ�ִ�б���
};

/// �н���L2ʵʱ����
struct CFFEXL2_Quotation
{
    int                 LocalTimeStamp;              ///< ���ݽ���ʱ��HHMMSSMMM 
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< 1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    int                 TradeDate;                   ///< �ɽ����� YYYYMMDD ͳһΪ���׹������ڣ���������������ѭ��ԭ��
    int                 Time;                        ///< ��������ʱ�� �����ֶκϳ�һ����HHMMSSMMM
    char                Symbol[SYMBOL_LEN];          ///< ֤ȯ����
    double              PreClosePrice;               ///< ���ռ� ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
    double              PreSettlePrice;              ///< ����� ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
    double              OpenPrice;                   ///< ���̼� ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
    double              HighPrice;                   ///< ��߼� ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
    double              LowPrice;                    ///< ��ͼ� ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
    double              TradePrice;                  ///< ���¼� ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
    double              ClosePrice;                  ///< ���̼� ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
    double              SettlePrice;                 ///< ����� ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
    double              PriceUpLimit;                ///< ��ͣ�� ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
    double              PriceDownLimit;              ///< ��ͣ�� ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
    long long           PreTotalPosition;            ///< ��ֲ���
    long long           TotalPosition;               ///< �ֲ���
    double              PreDelta;                    ///< ����ʵ�� ǰһ�նԳ�ֵ
    double              Delta;                       ///< ����ʵ�� �Գ�ֵ����Ȩ�۸�仯/�ڻ��۸�仯
    char                SettleGroupID[SETTLE_LEN];   ///< ���������
    unsigned int        SettleID;                    ///< ������
    long long           TotalVolume;                 ///< �ܳɽ���
    double              TotalAmount;                 ///< �ܳɽ��� ��ЧС��λΪ3λ
    union
    {
        BuySellLevelInfo    SellLevel[LEVEL_FIVE];   ///< �嵵������
        struct
        {
            double              SellPrice01;         ///< ����һ ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
            unsigned long long  SellVolume01;        ///< ����һ
            double              SellPrice02;         ///< ���۶� ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
            unsigned long long  SellVolume02;        ///< ������
            double              SellPrice03;         ///< ������ ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
            unsigned long long  SellVolume03;        ///< ������
            double              SellPrice04;         ///< ������ ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
            unsigned long long  SellVolume04;        ///< ������
            double              SellPrice05;         ///< ������ ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
            unsigned long long  SellVolume05;        ///< ������
        };
    };
    union
    {
        BuySellLevelInfo    BuyLevel[LEVEL_FIVE];    ///< �嵵������
        struct
        {
            double              BuyPrice01;          ///< ���һ ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
            unsigned long long  BuyVolume01;         ///< ����һ
            double              BuyPrice02;          ///< ��۶� ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
            unsigned long long  BuyVolume02;         ///< ������
            double              BuyPrice03;          ///< ����� ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
            unsigned long long  BuyVolume03;         ///< ������
            double              BuyPrice04;          ///< ����� ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
            unsigned long long  BuyVolume04;         ///< ������
            double              BuyPrice05;          ///< ����� ָ����ЧС��λΪ2λ����ծ��ЧС��λΪ3λ
            unsigned long long  BuyVolume05;         ///< ������
        };
    };
};
/// �н���L2��̬����
typedef CFFEXL2_Quotation CFFEXL2_Static;

/// ֣����L1ʵʱ����
struct CZCEL1_Quotation
{
    int                 LocalTimeStamp;              ///< ���ݽ���ʱ��HHMMSSMMM 
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< ��ʱδ�á�������ӡ�1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    int                 TradeDate;                   ///< �������� YYYYMMDD ͳһΪ���׹������ڣ���������������ѭ��ԭ��
    int                 Time;                        ///< ��������ʱ�� �����ֶκϳ�һ����HHMMSSMMM
    char                Symbol[SYMBOL_LEN];          ///< ֤ȯ����
    char                Version ;                    ///< ��Լ�汾�ţ�ĿǰΪ0
    double              PreClosePrice;                      ///< ���ռ�    
    double              PreSettlePrice;                     ///< �����
    unsigned long long  PreTotalPosition;                   ///< ��ֲ���
    double              OpenPrice;                          ///< ���̼�
    double              PriceUpLimit;                       ///< ��ͣ�۸�
    double              PriceDownLimit;                     ///< ��ͣ�۸�
    double              LastPrice;                          ///< ���¼�
    double              AveragePrice;                       ///< ����
    double              HighPrice;                          ///< ��߼�
    double              LowPrice;                           ///< ��ͼ�
    double              LifeHigh;                           ///< ��ʷ��߳ɽ��۸�
    double              LifeLow;                            ///< ��ʷ��ͳɽ��۸�
    double              BuyPrice01;                         ///< �����
    unsigned long long  BuyVolume01;                        ///< ������
    double              SellPrice01;                        ///< ������
    unsigned long long  SellVolume01;                       ///< ������
    unsigned long long  TotalPosition;                      ///< �ֲ���
    unsigned long long  TotalVolume;                        ///< �ɽ�����
    double              TotalAmount;                        ///< �ɽ��ܶ�
    double              ClosePrice;                         ///< �����̼�
    double              ClearPrice;                         ///< ���ս�������
    double              SettlePrice;                        ///< �����
    double              DeriveBidPrice;                     ///< ��������
    double              DeriveAskPrice;                     ///< ���������
    unsigned long long  DeriveBidLot;                       ///< �����������
    unsigned long long  DeriveAskLot;                       ///< �����������
    unsigned long long  LastLot;                            ///< ���һ�ʳɽ�����
};
/// ֣������̬����
typedef CZCEL1_Quotation CZCEL1_Static;

/// ��ʢָ������
struct ESUNNY_Index
{
    int                 LocalTimeStamp;                     ///< ���ݽ���ʱ��HHMMSSMMM 
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< ����Դ��־��������ӡ�1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    char                Symbol[SYMBOL_LEN];                 ///< ��Լ����
    unsigned long long  Time;                               ///< ��������ʱ�� 
    double              PreClosePrice;                      ///< ���ռ�
    double              PreSettlePrice;                     ///< �����
    unsigned long long  PreTotalPosition;                   ///< ��ֲ���
    double              OpenPrice;                          ///< ���̼�
    double              LastPrice;                          ///< ���¼�
    double              HighPrice;                          ///< ��߼�
    double              LowPrice;                           ///< ��ͼ�
    double              LifeHigh;                           ///< ��ʷ��߳ɽ��۸�
    double              LifeLow;                            ///< ��ʷ��ͳɽ��۸�
    unsigned long long  TotalVolume;                        ///< �ɽ�����
    unsigned long long  TotalPosition;                      ///< �ֲ���
    double              AveragePrice;                       ///< ����
    double              ClosePrice;                         ///< �����̼�
    double              TotalAmount;                        ///< �ɽ��ܶ�
    double              SettlePrice;                        ///< �����
    unsigned long long  LastMatchQty;                       ///< ˲ʱ�ɽ���
    double              PriceUpLimit;                       ///< ��ͣ�۸�
    double              PriceDownLimit;                     ///< ��ͣ�۸�
};

/// ������L1�������
struct DCEL1_Quotation
{
    int                 LocalTimeStamp;                     ///< ���ݽ���ʱ��HHMMSSMMM 
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< ��ʱδ�á�������ӡ�1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    int                 TradeDate;                          ///< �������� YYYYMMDD ͳһΪ���׹������ڣ���������������ѭ��ԭ��
    int                 Time;                               ///< ��������ʱ�� �����ֶκϳ�һ����HHMMSSMMM
    char                Symbol[SYMBOL_LEN];                 ///< ��Լ���� ���ڻ���ԼƷ�֡���Ȩ��ԼƷ��
    unsigned int        RoutineNo;                          ///< ������ ��ֵʼ����0��û����
    char                SecurityName[40];                   ///< ��Լ����
    double              PreClosePrice;                      ///< ���ռ�    
    double              PreSettlePrice;                     ///< �����
    unsigned long long  PreTotalPosition;                   ///< ��ֲ���
    double              OpenPrice;                          ///< ���̼�
    double              PriceUpLimit;                       ///< ��ͣ�۸�
    double              PriceDownLimit;                     ///< ��ͣ�۸�
    double              LastPrice;                          ///< ���¼�
    double              AveragePrice;                       ///< ����
    double              HighPrice;                          ///< ��߼�
    double              LowPrice;                           ///< ��ͼ�
    double              LifeHigh;                           ///< ��ʷ��߳ɽ��۸�
    double              LifeLow;                            ///< ��ʷ��ͳɽ��۸�
    unsigned long long  LastMatchQty;                       ///< ���³ɽ���
    unsigned long long  TotalVolume;                        ///< �ɽ�����
    double              TotalAmount;                        ///< �ɽ��ܶ�
    unsigned long long  TotalPosition;                      ///< �ֲ���
    long long           InterestChg;                        ///< �ֲ����仯
    double              BuyPrice01;            ///< �����
    unsigned long long  BuyVolume01;           ///< ������
    unsigned long long  BidImplyQty01;         ///< �����Ƶ���
    double              SellPrice01;           ///< ������
    unsigned long long  SellVolume01;          ///< ������
    unsigned long long  AskImplyQty01;         ///< �����Ƶ���
    double              ClosePrice;                         ///< �����̼�
    double              SettlePrice;                        ///< �����

    double  Delta;          ///< Delta
    double  Gamma;          ///< Gamma
    double  Rho;            ///< Rho
    double  Theta;          ///< Theta
    double  Vega;           ///< Vega
};

/// ������L1��̬����
typedef DCEL1_Quotation DCEL1_Static;

/// ������L1�����������
struct DCEL1_ArbiQuotation
{
    int                 LocalTimeStamp;                     ///< ���ݽ���ʱ��HHMMSSMMM 
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< ��ʱδ�á�������ӡ�1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    int                 TradeDate;                          ///< �������� YYYYMMDD ͳһΪ���׹������ڣ���������������ѭ��ԭ��
    int                 Time;                               ///< ��������ʱ�� �����ֶκϳ�һ����HHMMSSMMM
    unsigned int        RoutineNo;                          ///< ������ ��ֵʼ����0��û����
    char                Symbol[SYMBOL_LEN];                 ///< ������Լ�� ��ʽ���������� ��1��Լ����&��2��Լ���� ����������SP����������SPC��Ʒ������ 
    double              LastPrice;                          ///< ���¼�
    double              HighPrice;                          ///< ��߼�
    double              LowPrice;                           ///< ��ͼ�
    double              LifeHigh;                           ///< ��ʷ��߳ɽ��۸�
    double              LifeLow;                            ///< ��ʷ��ͳɽ��۸�
    double              PriceUpLimit;                       ///< ��ͣ�۸�
    double              PriceDownLimit;                     ///< ��ͣ�۸�
    double              BuyPrice01;            ///< �����
    unsigned long long  BuyVolume01;           ///< ������
    double              SellPrice01;           ///< ������
    unsigned long long  SellVolume01;          ///< ������
};

/// ������L2�����������
struct DCEL2_Quotation
{
    int                 LocalTimeStamp;                     ///< ���ݽ���ʱ��HHMMSSMMM 
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< ��ʱδ�á�������ӡ�1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    int                 TradeDate;                          ///< �������� YYYYMMDD ͳһΪ���׹������ڣ���������������ѭ��ԭ��
    int                 Time;                               ///< ��������ʱ�� �����ֶκϳ�һ����HHMMSSMMM
    char                Symbol[SYMBOL_LEN];                 ///< ��Լ���� ���ڻ���ԼƷ�֡���Ȩ��ԼƷ��
    unsigned int        RoutineNo;                          ///< ������ ��ֵʼ����0��û����
    char                SecurityName[40];                   ///< ��Լ����
    double              PreClosePrice;                      ///< ���ռ�    
    double              PreSettlePrice;                     ///< �����
    unsigned long long  PreTotalPosition;                   ///< ��ֲ���
    double              OpenPrice;                          ///< ���̼�
    double              PriceUpLimit;                       ///< ��ͣ�۸�
    double              PriceDownLimit;                     ///< ��ͣ�۸�
    double              LastPrice;                          ///< ���¼�
    double              AveragePrice;                       ///< ����
    double              HighPrice;                          ///< ��߼�
    double              LowPrice;                           ///< ��ͼ�
    double              LifeHigh;                           ///< ��ʷ��߳ɽ��۸�
    double              LifeLow;                            ///< ��ʷ��ͳɽ��۸�
    unsigned long long  LastMatchQty;                       ///< ���³ɽ���
    unsigned long long  TotalVolume;                        ///< �ɽ�����
    double              TotalAmount;                        ///< �ɽ��ܶ�
    unsigned long long  TotalPosition;                      ///< �ֲ���
    long long           InterestChg;                        ///< �ֲ����仯
    double              ClosePrice;                         ///< �����̼�
    double              SettlePrice;                        ///< �����

    unsigned int        MBLQuotBuyNum;                      ///< �������������
    union
    {
        DCE_BuySellLevelInfo3     BuyLevel[LEVEL_FIVE];        ///< �嵵������
        struct  
        {
            double              BuyPrice01;            ///< �����һ
            unsigned long long  BuyVolume01;           ///< ������һ
            unsigned long long  BidImplyQty01;         ///< �����Ƶ���һ
            double              BuyPrice02;            ///< ����۶�
            unsigned long long  BuyVolume02;           ///< ��������
            unsigned long long  BidImplyQty02;         ///< �����Ƶ�����
            double              BuyPrice03;            ///< �������
            unsigned long long  BuyVolume03;           ///< ��������
            unsigned long long  BidImplyQty03;         ///< �����Ƶ�����
            double              BuyPrice04;            ///< �������
            unsigned long long  BuyVolume04;           ///< ��������
            unsigned long long  BidImplyQty04;         ///< �����Ƶ�����
            double              BuyPrice05;            ///< �������
            unsigned long long  BuyVolume05;           ///< ��������
            unsigned long long  BidImplyQty05;         ///< �����Ƶ�����
        };
    };

    unsigned int                MBLQuotSellNum;        ///< �������������
    union
    {
        DCE_BuySellLevelInfo3    SellLevel[LEVEL_FIVE];      ///< �嵵������
        struct  
        {
            double              SellPrice01;           ///< ������һ
            unsigned long long  SellVolume01;          ///< ������һ
            unsigned long long  AskImplyQty01;         ///< �����Ƶ���һ
            double              SellPrice02;           ///< �����۶�
            unsigned long long  SellVolume02;          ///< ��������
            unsigned long long  AskImplyQty02;         ///< �����Ƶ�����
            double              SellPrice03;           ///< ��������
            unsigned long long  SellVolume03;          ///< ��������
            unsigned long long  AskImplyQty03;         ///< �����Ƶ�����
            double              SellPrice04;           ///< ��������
            unsigned long long  SellVolume04;          ///< ��������
            unsigned long long  AskImplyQty04;         ///< �����Ƶ�����
            double              SellPrice05;           ///< ��������
            unsigned long long  SellVolume05;          ///< ��������
            unsigned long long  AskImplyQty05;         ///< �����Ƶ�����        
        };
    };

    unsigned int        BuyLevelQueueNo01;             ///< ��һ����ʾί�б���
    unsigned int        BuyLevelQueue[LEVEL_TEN];      ///< �����ż�ί��������

    unsigned int        SellLevelQueueNo01;            ///< ��һ����ʾί�б���
    unsigned int        SellLevelQueue[LEVEL_TEN];     ///< �����ż�ί��������
    
    double  Delta;          ///< Delta
    double  Gamma;          ///< Gamma
    double  Rho;            ///< Rho
    double  Theta;          ///< Theta
    double  Vega;           ///< Vega
};
/// ������L2��̬����
typedef DCEL2_Quotation DCEL2_Static;

/// ������L2���������������
struct DCEL2_ArbiQuotation
{
    int                 LocalTimeStamp;                     ///< ���ݽ���ʱ��HHMMSSMMM 
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< ��ʱδ�á�������ӡ�1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    int                 TradeDate;                          ///< �������� YYYYMMDD ͳһΪ���׹������ڣ���������������ѭ��ԭ��
    int                 Time;                               ///< ��������ʱ�� �����ֶκϳ�һ����HHMMSSMMM
    char                Symbol[SYMBOL_LEN];                 ///< ������Լ�� ��ʽ���������� ��1��Լ����&��2��Լ���� ����������SP����������SPC��Ʒ������ 
    unsigned int        RoutineNo;                          ///< ������ ��ֵʼ����0��û����
    double              LastPrice;                          ///< ���¼�
    double              HighPrice;                          ///< ��߼�
    double              LowPrice;                           ///< ��ͼ�
    double              LifeHigh;                           ///< ��ʷ��߳ɽ��۸�
    double              LifeLow;                            ///< ��ʷ��ͳɽ��۸�
    double              PriceUpLimit;                       ///< ��ͣ�۸�
    double              PriceDownLimit;                     ///< ��ͣ�۸�

    unsigned int    MBLQuotBuyNum;                          ///< �������������
    union
    {
        DCE_BuySellLevelInfo3    BuyLevel[LEVEL_FIVE];        ///< �嵵������
        struct  
        {
            double              BuyPrice01;            ///< �����һ
            unsigned long long  BuyVolume01;           ///< ������һ
            unsigned long long  BidImplyQty01;         ///< �����Ƶ���һ
            double              BuyPrice02;            ///< ����۶�
            unsigned long long  BuyVolume02;           ///< ��������
            unsigned long long  BidImplyQty02;         ///< �����Ƶ�����
            double              BuyPrice03;            ///< �������
            unsigned long long  BuyVolume03;           ///< ��������
            unsigned long long  BidImplyQty03;         ///< �����Ƶ�����
            double              BuyPrice04;            ///< �������
            unsigned long long  BuyVolume04;           ///< ��������
            unsigned long long  BidImplyQty04;         ///< �����Ƶ�����
            double              BuyPrice05;            ///< �������
            unsigned long long  BuyVolume05;           ///< ��������
            unsigned long long  BidImplyQty05;         ///< �����Ƶ�����
        };
    };

    unsigned int                MBLQuotSellNum;        ///< �������������
    union
    {
        DCE_BuySellLevelInfo3    SellLevel[LEVEL_FIVE];      ///< �嵵������
        struct  
        {
            double              SellPrice01;           ///< ������һ
            unsigned long long  SellVolume01;          ///< ������һ
            unsigned long long  AskImplyQty01;         ///< �����Ƶ���һ
            double              SellPrice02;           ///< �����۶�
            unsigned long long  SellVolume02;          ///< ��������
            unsigned long long  AskImplyQty02;         ///< �����Ƶ�����
            double              SellPrice03;           ///< ��������
            unsigned long long  SellVolume03;          ///< ��������
            unsigned long long  AskImplyQty03;         ///< �����Ƶ�����
            double              SellPrice04;           ///< ��������
            unsigned long long  SellVolume04;          ///< ��������
            unsigned long long  AskImplyQty04;         ///< �����Ƶ�����
            double              SellPrice05;           ///< ��������
            unsigned long long  SellVolume05;          ///< ��������
            unsigned long long  AskImplyQty05;         ///< �����Ƶ�����        
        };
    };

    unsigned int        BuyLevelQueueNo01;             ///< ��һ����ʾί�б���
    unsigned int        BuyLevelQueue[LEVEL_TEN];      ///< �����ż�ί��������

    unsigned int        SellLevelQueueNo01;            ///< ��һ����ʾί�б���
    unsigned int        SellLevelQueue[LEVEL_TEN];     ///< �����ż�ί��������
};

/// ������L2ʵʱ�����
struct DCEL2_RealTimePrice
{
    int                 LocalTimeStamp;                     ///< ���ݽ���ʱ��HHMMSSMMM 
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< ��ʱδ�á�������ӡ�1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    int                 TradeDate;                          ///< �������� YYYYMMDD ͳһΪ���׹������ڣ���������������ѭ��ԭ��
    int                 Time;                               ///< ��������ʱ�� �����ֶκϳ�һ����HHMMSSMMM
    char                Symbol[SYMBOL_LEN];                 ///< ��Լ���� ���ڻ���ԼƷ�֡���Ȩ��ԼƷ��
    double              SettlePrice ;                       ///< ʵʱ�����    
};

/// ������L2ί��ͳ������
struct DCEL2_OrderStatistic
{
    int                 LocalTimeStamp;                     ///< ���ݽ���ʱ��HHMMSSMMM 
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< ��ʱδ�á�������ӡ�1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    int                 TradeDate;                          ///< �������� YYYYMMDD ͳһΪ���׹������ڣ���������������ѭ��ԭ��
    int                 Time;                               ///< ��������ʱ�� �����ֶκϳ�һ����HHMMSSMMM
    char                Symbol[SYMBOL_LEN];                 ///< ��Լ���� ���ڻ���ԼƷ�֡���Ȩ��ԼƷ��
    unsigned long long  TotalBuyOrderVolume ;               ///< ί���������� 
    unsigned long long  TotalSellOrderVolume ;              ///< ί���������� 
    double              WtAvgBuyPrice ;                     ///< ��Ȩƽ��ί���    
    double              WtAvgSellPrice ;                    ///< ��Ȩƽ��ί����    
};

/// ������L2�ּ۳ɽ�������
struct DCEL2_MarchPriceQty
{
    int                 LocalTimeStamp;                     ///< ���ݽ���ʱ��HHMMSSMMM 
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< ��ʱδ�á�������ӡ�1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    int                 TradeDate;                          ///< �������� YYYYMMDD ͳһΪ���׹������ڣ���������������ѭ��ԭ��
    int                 Time;                               ///< ��������ʱ�� �����ֶκϳ�һ����HHMMSSMMM
    char                Symbol[SYMBOL_LEN];                 ///< ��Լ���� ���ڻ���ԼƷ�֡���Ȩ��ԼƷ��
    union
    {
        DCE_PriceLevelInfo    PriceLevel[LEVEL_FIVE];      ///< �嵵�ּ�λ�ɽ���
        struct  
        {
            double              Price01;               ///< �۸�һ
            unsigned long long  PriceBOQty01;          ///< ������һ
            unsigned long long  PriceBEQty01;          ///< ��ƽ����һ
            unsigned long long  PriceSOQty01;          ///< ��������һ
            unsigned long long  PriceSEQty01;          ///< ��ƽ����һ
            double              Price02;               ///< �۸��
            unsigned long long  PriceBOQty02;          ///< ��������
            unsigned long long  PriceBEQty02;          ///< ��ƽ������
            unsigned long long  PriceSOQty02;          ///< ����������
            unsigned long long  PriceSEQty02;          ///< ��ƽ������
            double              Price03;               ///< �۸���
            unsigned long long  PriceBOQty03;          ///< ��������
            unsigned long long  PriceBEQty03;          ///< ��ƽ������
            unsigned long long  PriceSOQty03;          ///< ����������
            unsigned long long  PriceSEQty03;          ///< ��ƽ������
            double              Price04;               ///< �۸���
            unsigned long long  PriceBOQty04;          ///< ��������
            unsigned long long  PriceBEQty04;          ///< ��ƽ������
            unsigned long long  PriceSOQty04;          ///< ����������
            unsigned long long  PriceSEQty04;          ///< ��ƽ������
            double              Price05;               ///< �۸���
            unsigned long long  PriceBOQty05;          ///< ��������
            unsigned long long  PriceBEQty05;          ///< ��ƽ������
            unsigned long long  PriceSOQty05;          ///< ����������
            unsigned long long  PriceSEQty05;          ///< ��ƽ������
        };
    };
};

/// ������ʵʱ����
struct SHFEL1_Quotation
{
    int                 LocalTimeStamp;                     ///< ����ʱ�� 
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< ����Դ��־��1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    int                 ActionDay;                          ///< ҵ��������,����ʵ�ʷ��������ڣ��������ҹ��ҵ��������Ϊ��������ڣ����г�������������һ��Ӧ�����ڡ�
    int                 Time;                               ///< ��������ʱ�� �����ֶκϳ�һ����HHMMSSMMM
    int                 TradeDate;                          ///< �������� YYYYMMDD ͳһΪ���׹������ڣ���������������ѭ��ԭ��
    char                SettleGroupID[SETTLE_GROUP_ID_LEN]; ///< ���������
    unsigned int        SettleID;                           ///< ������
    char                Symbol[SYMBOL_LEN];                 ///< ��Լ����
    double              PreSettlePrice;                     ///< �����
    double              PreClosePrice;                      ///< ���ռ�
    double              PreTotalPosition;                   ///< ��ֲ���
    double              OpenPrice;                          ///< ���̼�
    double              PriceUpLimit;                       ///< ��ͣ�۸�
    double              PriceDownLimit;                     ///< ��ͣ�۸�
    double              LastPrice;                          ///< ���¼�
    double              HighPrice;                          ///< ��߼�
    double              LowPrice;                           ///< ��ͼ�
    unsigned long long  TotalVolume;                        ///< �ܳɽ���
    double              TotalAmount;                        ///< �ɽ��ܶ�
    double              TotalPosition;                      ///< �ֲ���
    double              ClosePrice;                         ///< �����̼�
    double              SettlePrice;                        ///< ������
    double              PreDelta;                           ///< ����ʵ��
    double              Delta;                              ///< ����ʵ��
    double              BuyPrice01;                         ///< ���һ
    unsigned long long  BuyVolume01;                        ///< ����һ
    double              SellPrice01;                        ///< ����һ
    unsigned long long  SellVolume01;                       ///< ����һ
};

struct stUnderlyingSecuritiesItem
{
    char                UnderlyingSecurityCode[20];         ///< Ȩ֤��Ӧ��5λ���ı��֤ȯ���롣
    double              UnderlyingSecurityWeight;           ///< OMD1.23,API2.8.5ȡ������ֵΪ0��
};

/// �۽���L2��̬����
struct HKEXL2_Static
{
    int                 LocalTimeStamp;                     ///< �ɼ�ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< ����Դ��־�����ֶ�Ϊ4λ�ַ�����ÿλ��ʾ�ض��ĺ��壬�޶�������ո�1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    long long           PacketTimeStamp;                    ///< ��ͷʱ��YYYYMMDDHHMMSSMMM
    unsigned int        MessageID;                          ///< ��Ϣ�����
    unsigned int        ChannelID;                          ///< �ŵ�ID
    char                Symbol[SYMBOL_LEN];                 ///< ֤ȯ���룬5 λ����֤ȯ���룬ȡֵ��Χ��1�C99999֮�䣬40�ֽ�
    char                MarketType[5];                      ///< �г�����,MAIN�������г� GEM����ҵ���г� NASD����˹����г� ETS�����������г�
    char                ISINCode[12];                       ///< ISIN����
    char                CFICode[5];                         ///< ֤ȯ����, BOND��ծȯ BWRT��һ�����Ϲ�Ȩ֤ EQTY����Ʊ TRST������ WRNT���Ϲ�Ȩ֤�ͽṹ�Բ�Ʒ�����֡�ţ��֤��
    char                SpreadTableCode[3];                 ///< ֤ȯ�۲��'01'��Part A  '02'��Part B
    char                SecurityName[40];                   ///< ֤ȯ���
    char                Currency[5];                        ///< ���Ҵ���, HKD����Ԫ USD����Ԫ EUR��ŷԪ JPY����Ԫ GBP��Ӣ�� CAD�����ô�Ԫ SGD���¼���Ԫ CNY�������
    char                SecurityNameGCCS[90];               ///< ֤ȯ���Ƶķ������ı��룬UTF8����
    char                SecurityNameGB[90];                 ///< ֤ȯ���Ƶļ������ı��룬UTF8����
    unsigned int        RoundLot;                           ///< ÿ����Ŀ
    double              PreClosePrice;                      ///< ���ռ�, 3λС����ǰ���̼۸����г�Ȩ��Ϣ��Ϊ��Ȩ��Ϣ������̼ۣ���
    char                VCMFlag;                            ///< VCM���֤ȯ��־��Y��������VCM  N����������VCM
    char                ShortSellFlag;                      ///< ������Ȩ��־��Y����������  N������������
    char                CASFlag;                            ///< CAS���֤ȯ��Y��������CAS  N����������CAS
    char                CCASSFlag;                          ///< �������֤ȯ��Y���������֤ȯ  N�����������֤ȯ
    char                DummySecurityFlag;                  ///< ����֤ȯ��־��Y������֤ȯ  N������֤ȯ
    char                TestSecurityFlag;                   ///< OMD1.23,API2.8.5��ȡ����Ϊ' '�ո��ַ�
    char                StampDutyFlag;                      ///< ӡ��˰��־��Y����Ҫӡ��˰  N������Ҫӡ��˰
    int                 ListingDate;                        ///< �������ڡ���ʽΪYYYYMMDD��δ֪����������ȡֵΪ19000101
    int                 EndDate;                            ///< �������ڡ���ʽΪYYYYMMDD��������ڲ�����ȡֵΪ0��
    char                FreeText[38];                       ///< �����ı����̶����ȵ�����. ��û�������ĵ�ʱ�ɿո����
    char                EFNFlag;                            ///< ������ծȯ��־��Y����������ծȯ  N������������ծȯ
    double              AccruedInterest;                    ///< Ӧ����Ϣ��3λ��ЧС��
    double              CouponRate;                         ///< Ʊ�����ʡ�3λ��ЧС��
    double              ConversionRatio;                    ///< ���Թ�ƱΪ��ĵĽṹ����Ʒ�Ļ����ʡ�3λ��ЧС��
    double              StrikePrice;                        ///< ִ�м۸�3λ��ЧС��
    int                 MaturityDate;                       ///< �����ա�ע��Ϊ�Ϲ�Ȩ֤���ṹ����Ʒ�ĵ����գ���ʽΪYYYYMMDD
    char                CallOrPut;                          ///< �Ϲ��Ϲ���־����������Ȩ֤�Լ�һ����Ȩ֤��C �Ϲ���P�Ϲ���O���������ڹ�Ʊ�ҹ�Ʊ�ݡ�ţ��֤��C ���ǣ�P������ע����ʾ�Ϲ�Ȩ֤��ṹ�Բ�Ʒ���Ϲ������Ϲ�
    char                OptionType;                         ///< ��Ȩ���͡�A����ʽ  E��ŷʽ  �ո�����
    unsigned int        NoUnderlyingSecurities;             ///< ���֤ȯ��Ŀ��0���� 20 һ�����Ϲ�Ȩ֤��1���Ϲ�Ȩ֤�ͽṹ�Բ�Ʒ
    stUnderlyingSecuritiesItem   UnderlyingSecurities[UNDERLYINGSECURITYES_LEN];  ///< ���֤ȯ�����Ȩ���б�20
    unsigned int        NoLiquidityProviders;               ///< ��������Ŀ��50��
    unsigned int        LPBrokerNumber[LPBROKERNUMBER_LEN]; ///< �����̾�����ID�б�
    double              Yield;                              ///< ծȯ���������ʣ�����ϢƱ�ʺ�����۸�3λ��ЧС��
    unsigned int        StatusID;                           ///< ֤ȯ����״̬��2������ͣ��  3������

    //OMD1.23 ,API2.8.5�¼�
    unsigned int        ProductType;                        ///< ֤ȯ��Ʒ����
    double              StrikePrice2;                       ///< ִ�м۸�2
    char                WarrantType;                        ///< Ȩ֤����
    long long           CallPrice;                          ///< ţ��֤�Ϲ���
    unsigned int        DecimalsInCallPrice;                ///< ţ��֤�Ϲ���С��λ
    long long           Entitlement;                        ///< Ȩ֤Ȩ��
    unsigned int        DecimalsInEntitlement;              ///< Ȩ֤Ȩ��С��λ
    unsigned int        NoWarrantsPerEntitlement;           ///< ÿ��Ȩ���Ȩ֤����
};


/// �۽���L2��������
struct HKEXL2_Quotation
{
    int                 LocalTimeStamp;                     ///< �ɼ�ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< ����Դ��־�����ֶ�Ϊ4λ�ַ�����ÿλ��ʾ�ض��ĺ��壬�޶�������ո� ��1λ��Ӧ����1����ʾ���Ϻ���������Դ����2����ʾ���ڻ�������Դ
    long long           PacketTimeStamp;                    ///< ��ͷʱ��YYYYMMDDHHMMSSMMM
    unsigned int        MessageID;                          ///< ��Ϣ�����
    unsigned int        ChannelID;                          ///< �ŵ�ID
    char                Symbol[SYMBOL_LEN];                 ///< ֤ȯ���룬5 λ����֤ȯ���룬ȡֵ��Χ��1�C99999֮�䣬40�ֽ�
    long long           TradeTime;                          ///< �ɽ�ʱ�䣬����������ʱ��ΪUTC��ʽ��ת����datetime��ʽ��YYYYMMDDHHMMSSsss��������TrdCancelFlag=Y
    double              OpenPrice;                          ///< ���̼ۣ��Կ���ǰʱ�ε����ղο�ƽ���Ϊ���̼ۡ�������ǰʱ��δ�������̼۸�ģ��Ե��յ�һ�ʳɽ��۸���Ϊ���̼�
    double              LastPrice;                          ///< ���³ɽ��ۣ�3λС��
    double              NominalPrice;                       ///< ���̼ۣ�3λС��
    double              HighPrice;                          ///< ��߼ۣ�3λС��
    double              LowPrice;                           ///< ��ͼۣ�3λС��
    unsigned long long  TotalVolume;                        ///< �ɽ�����
    double              TotalAmount;                        ///< �ɽ��ܽ�3λС��
    double              VWAP;                               ///< �ɽ�����Ȩƽ���۸�3λС��
    unsigned int        ShortSellSharesTraded;              ///< ���ճɽ�����
    double              ShortSellTurnover;                  ///< ���ճɽ���3λС��
    double              ClosePrice;                         ///< ���̼ۣ�3λС��
    unsigned int        TotalNo;                            ///< �ɽ����������̵ĳɽ�������SS�����ݲ���ʾ��Ϊ0ֵ
    unsigned int        RecID;                              ///< Ψһ��ʶÿһ�ʳɽ�����������룬��1��ʼ����ÿ�ʳɽ�����
    unsigned long long  TradeVolume;                        ///< ˲ʱ�ɽ��������TrdCancelFlag=Y����ʾδ�ɽ���ʣ����
    int                 TradeType;                          ///< �����ɽ�����
                                                            ///< 0���Զ����̵ķ�˫�߿ͳɽ� (AMS<space>)
                                                            ///< 4������ǰ�ɽ�(Off-exchange previous day) (AMS ��P��)
                                                            ///< 22�����Զ����̻����ر�������λ�ķ�˫�߿ͳɽ�(AMS ��M��)
                                                            ///< 100���Զ����̵�˫�߿ͳɽ�(AMS��Y��)
                                                            ///< 101�����Զ����̻����ر�������λ��˫�߿ͳɽ�(AMS ��X��)
                                                            ///< 102����ɳɽ�(AMS ��D��)
                                                            ///< 103�����۳ɽ� (AMS ��U��)
                                                            ///< 104�����⽻��
                                                            ///< ��TrdCancelFlag = Yʱ������
    char                TradeCancelFlag;                    ///< ָʾ��ԭ��������¼���еĽ����Ѿ���ȡ���ˡ�Y��ȡ��  N��û��ȡ��
    double              AggregatePrice;                     ///< �ο�ƽ��۸�3λС����IEP������ʱȡֵΪ0
    unsigned long long  AggregateQuantity;                  ///< �ο�ƽ��ɽ���
    double              CASReferencePrice;                  ///< ί�ж����ο��۸�CAS�׶Σ���3λ��ЧС��������ο��۲����ã�ȡֵΪ0
    double              CASLowerPrice;                      ///< ί�ж����ο��۸�CAS�׶Σ���3λ��ЧС����ȡֵ0��ʾN/A
    double              CASUpperPrice;                      ///< ί�ж������޼۸�CAS�׶Σ���3λ��ЧС����ȡֵ0��ʾN/A
    char                OrderImbalanceDirection;            ///< ����������ƽ�ⷽ��N��������� B����ʣ�� S������ʣ�� �ո񣺲����ã����ο�ƽ��۲�����
    unsigned long long  OrderImbalanceQuantity;             ///< ������ƽ������������ƽ�ⷽ��OrderImbalanceDirectionΪ�ո񣬴�ֵ�����塣 ע���ڲο�ƽ��۸�׶Σ�������ƽ�������
    long long           CoolingOffStartTime;                ///< �侲�ڿ�ʼʱ�䡣����������ʱ��ΪUTC��ʽ��ת����datetime��ʽ��YYYYMMDDHHMMSSsss��ȡֵ0��ʾN/A
    long long           CoolingOffEndTime;                  ///< �侲�ڽ���ʱ�䡣����������ʱ��ΪUTC��ʽ��ת����datetime��ʽ��YYYYMMDDHHMMSSsss��ȡֵ0��ʾN/A
    double              VCMReferencePrice;                  ///< �侲�ڲο��ۡ�3λС����ȡֵ0��ʾN/A
    double              VCMLowerPrice;                      ///< �侲�ڿɽ��׼۸����ޡ�3λС����ȡֵ0��ʾN/A
    double              VCMUpperPrice;                      ///< �侲�ڿɽ��׼۸����ޡ�3λС����ȡֵ0��ʾN/A
    unsigned int        BuyLevelNo;                         ///< ���̼�λ��
    union
    {
        BuySellLevelInfo3 BuyLevel[LEVEL_TEN];
        struct
        {
            double              BuyPrice01;                         ///< �����һ��3λС��
            unsigned long long  BuyVolume01;                        ///< ������һ
            unsigned int        TotalBuyOrderNo01;                  ///< �����һ��ί�б���
            double              BuyPrice02;                         ///< ����۶���3λС��
            unsigned long long  BuyVolume02;                        ///< ��������
            unsigned int        TotalBuyOrderNo02;                  ///< ����۶���ί�б���
            double              BuyPrice03;                         ///< ���������3λС��
            unsigned long long  BuyVolume03;                        ///< ��������
            unsigned int        TotalBuyOrderNo03;                  ///< ���������ί�б���
            double              BuyPrice04;                         ///< ������ġ�3λС��
            unsigned long long  BuyVolume04;                        ///< ��������
            unsigned int        TotalBuyOrderNo04;                  ///< ���������ί�б���
            double              BuyPrice05;                         ///< ������塣3λС��
            unsigned long long  BuyVolume05;                        ///< ��������
            unsigned int        TotalBuyOrderNo05;                  ///< ���������ί�б���
            double              BuyPrice06;                         ///< ���������3λС��
            unsigned long long  BuyVolume06;                        ///< ��������
            unsigned int        TotalBuyOrderNo06;                  ///< ���������ί�б���
            double              BuyPrice07;                         ///< ������ߡ�3λС��
            unsigned long long  BuyVolume07;                        ///< ��������
            unsigned int        TotalBuyOrderNo07;                  ///< ���������ί�б���
            double              BuyPrice08;                         ///< ����۰ˡ�3λС��
            unsigned long long  BuyVolume08;                        ///< ��������
            unsigned int        TotalBuyOrderNo08;                  ///< ����۰���ί�б���
            double              BuyPrice09;                         ///< ����۾š�3λС��
            unsigned long long  BuyVolume09;                        ///< ��������
            unsigned int        TotalBuyOrderNo09;                  ///< ����۾���ί�б���
            double              BuyPrice10;                         ///< �����ʮ��3λС��
            unsigned long long  BuyVolume10;                        ///< ������ʮ
            unsigned int        TotalBuyOrderNo10;                  ///< �����ʮ��ί�б���
        };
    };
    unsigned int                SellLevelNo;                        ///< ���̼�λ��
    union
    {
        BuySellLevelInfo3 SellLevel[LEVEL_TEN];
        struct
        {
            double              SellPrice01;                        ///< ������һ��3λС��
            unsigned long long  SellVolume01;                       ///< ������һ
            unsigned int        TotalSellOrderNo01;                 ///< ������һ��ί�б���
            double              SellPrice02;                        ///< �����۶���3λС��
            unsigned long long  SellVolume02;                       ///< ��������
            unsigned int        TotalSellOrderNo02;                 ///< �����۶���ί�б���
            double              SellPrice03;                        ///< ����������3λС��
            unsigned long long  SellVolume03;                       ///< ��������
            unsigned int        TotalSellOrderNo03;                 ///< ����������ί�б���
            double              SellPrice04;                        ///< �������ġ�3λС��
            unsigned long long  SellVolume04;                       ///< ��������
            unsigned int        TotalSellOrderNo04;                 ///< ����������ί�б���
            double              SellPrice05;                        ///< �������塣3λС��
            unsigned long long  SellVolume05;                       ///< ��������
            unsigned int        TotalSellOrderNo05;                 ///< ����������ί�б���
            double              SellPrice06;                        ///< ����������3λС��
            unsigned long long  SellVolume06;                       ///< ��������
            unsigned int        TotalSellOrderNo06;                 ///< ����������ί�б���
            double              SellPrice07;                        ///< �������ߡ�3λС��
            unsigned long long  SellVolume07;                       ///< ��������
            unsigned int        TotalSellOrderNo07;                 ///< ����������ί�б���
            double              SellPrice08;                        ///< �����۰ˡ�3λС��
            unsigned long long  SellVolume08;                       ///< ��������
            unsigned int        TotalSellOrderNo08;                 ///< �����۰���ί�б���
            double              SellPrice09;                        ///< �����۾š�3λС��
            unsigned long long  SellVolume09;                       ///< ��������
            unsigned int        TotalSellOrderNo09;                 ///< �����۾���ί�б���
            double              SellPrice10;                        ///< ������ʮ��3λС��
            unsigned long long  SellVolume10;                       ///< ������ʮ
            unsigned int        TotalSellOrderNo10;                 ///< ������ʮ��ί�б���
        };
    };
};

/// �����˶�����Ŀ
struct HKBrokerIDItem
{
    unsigned int    BrokerID;                           ///< ������ID
    unsigned int    BQPriceLevel;                       ///< �ñ�־����������ID����Ӧ�ļ۸�λ
};

/// �۽���L2�����˶���
struct HKEXL2_BrokerQueue
{
    int                 LocalTimeStamp;                     ///< �ɼ�ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< ����Դ��־�����ֶ�Ϊ4λ�ַ�����ÿλ��ʾ�ض��ĺ��壬�޶�������ո�1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    long long           PacketTimeStamp;                    ///< ��ͷʱ��YYYYMMDDHHMMSSMMM
    unsigned int        MessageID;                          ///< ��Ϣ�����
    unsigned int        ChannelID;                          ///< �ŵ�ID
    char                Symbol[SYMBOL_LEN];                 ///< ֤ȯ���룬5 λ����֤ȯ���룬ȡֵ��Χ��1�C99999֮�䣬40�ֽ�
    char                BuyBQMoreFlag;                      ///< �򷽾����˶��б�ʶ��Y�������л��о����� N����������û�о�����
    unsigned int        BuyBQItemCount;                     ///< �򷽾����˶�������0-40
    HKBrokerIDItem      BuyBrokerQueue[BROKERQUEUE_LEN];    ///< �򷽾����˶��У�����BQItemCountȷ�����������40
    char                SellBQMoreFlag;                     ///< ���������˶��б�ʶ��Y�������л��о����� N����������û�о�����
    unsigned int        SellBQItemCount;                    ///< ���������˶�������0-40
    HKBrokerIDItem      SellBrokerQueue[BROKERQUEUE_LEN];   ///< ���������˶��У�����BQItemCountȷ�����������40

};

/// �۽���L2ָ������
struct HKEXL2_Index
{
    int                 LocalTimeStamp;                     ///< �ɼ�ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< ����Դ��־�����ֶ�Ϊ4λ�ַ�����ÿλ��ʾ�ض��ĺ��壬�޶�������ո�1=�Ϻ��ϻ��������Դ��2=���ڸ�����������Դ
    long long           PacketTimeStamp;                    ///< ��ͷʱ��YYYYMMDDHHMMSSMMM
    unsigned int        MessageID;                          ///< ��Ϣ�����
    unsigned int        ChannelID;                          ///< �ŵ�ID
    char                Symbol[SYMBOL_LEN];                 ///< ָ�����룬5 λ����֤ȯ���룬ȡֵ��Χ��1�C99999֮�䣬40�ֽ�
    char                SymbolSource[SYMBOLSOURCE_LEN];     ///< ָ����Դ��C����ָ֤�����޹�˾������������Դ��H������ָ�����޹�˾��S����׼�ն�����˹ָ����T����ɭ·͸
    long long           Time;                               ///< ��������ʱ�䡣����������ʱ��ΪUTC��ʽ��ת����datetime��ʽ��YYYYMMDDHHMMSSsss
    double              OpenPrice;                          ///< ���̼ۣ�4λ��ЧС��
    double              LastPrice;                          ///< ���¼ۣ�4λ��ЧС��
    double              PriceUpdown1;                       ///< ���仯ֵ��4λ��ЧС�������ռ������¼۵ľ��仯ֵ
    double              HighPrice;                          ///< ��߼ۣ�4λС��
    double              LowPrice;                           ///< ��ͼۣ�4λС��
    double              TotalAmount;                        ///< �ɽ��ܶ4λС��
    long long           TotalVolume;                        ///< �ɽ�����
    double              PreviousSesClose;                   ///< ǰ���׽׶�����ֵ��4λС������CSI��S&PΪǰһ�����������̼ۣ�HIS��TRΪ��һ���׽׶ε�����ֵ��
    double              EASValue;                           ///< �����ƽ������ֵ��2λ��ЧС��
    double              ClosePrice;                         ///< ���̼ۡ�4λ��ЧС��
    char                Currency[5];                        ///< ָ�����Ҵ��롣HKD����Ԫ USD����Ԫ EUR��ŷԪ JPY����Ԫ GBP��Ӣ�� CAD�����ô�Ԫ SGD���¼���Ԫ CNY�������
    char                Exception;                          ///< �쳣ָʾ��
    char                SecurityPhaseTag[8];                ///< ָ��״̬��C������ȡֵ I��Indicative O������ P��ǰ���̼� R���������� S��ֹ�� T��ʵʱ�������������˾û�ж���,ȡֵ����Ϊ��
};

/// �۽���L2�г�����
struct HKEXL2_Overview
{
    int                 LocalTimeStamp;                     ///< �ɼ�ʱ��HHMMSSMMM
    char                QuotationFlag[QUOTATION_FLAG_LEN];  ///< ����Դ��־�����ֶ�Ϊ4λ�ַ�����ÿλ��ʾ�ض��ĺ��壬�޶�������ո� ��1λ��Ӧ����1����ʾ���Ϻ���������Դ����2����ʾ���ڻ�������Դ
    long long           PacketTimeStamp;                    ///< ��ͷʱ��YYYYMMDDHHMMSSMMM
    unsigned int        MessageID;                          ///< ��Ϣ�����
    unsigned int        ChannelID;                          ///< �ŵ�ID
    char                MarketType[5];                      ///< �г����룬MAIN�������г� GEM����ҵ���г� NASD����˹����г� ETS�����������г�
    char                MarketName[40];                     ///< �г�����
    char                BasicCurrency[5];                   ///< ���Ҵ��롣HKD����Ԫ USD����Ԫ EUR��ŷԪ JPY����Ԫ GBP��Ӣ�� CAD�����ô�Ԫ SGD���¼���Ԫ CNY�������
    char                Currency[5];                        ///< ���Ҵ��롣HKD����Ԫ USD����Ԫ EUR��ŷԪ JPY����Ԫ GBP��Ӣ�� CAD�����ô�Ԫ SGD���¼���Ԫ CNY������ң���ֵ����ϡ��ɽ���ʹ�á�
    int                 CurrencyFactor;                     ///< ����ת�����ӡ�����ֵ n ��ζ�������������м۸��ֶ�Ӧ����˱�ʾ����ֵ= �ü۸� * 10^n
    double              ExchangeRate;                       ///< ���ʡ����ʣ��ø۱������һ��λ�����. 4λС��.
    unsigned int        SampleNo;                           ///< ֤ȯ����
    double              TotalAmount;                        ///< �ɽ���3λС��
    unsigned int        TradingSessionID;                   ///< ���׽׶α�ʶ����1������
    unsigned int        TradingSessionSubID;                ///< ���׽׶��ӱ�ʶ����
                                                            ///< 0���չر�(DC)
                                                            ///< 1������ǰ (Order Input OI)
                                                            ///< 2�����̻򾺼ۿ���(Matching MA)
                                                            ///< 3����������(Continuous CT)
                                                            ///< 4�����л����о��۽׶Σ�Matching (MA)��
                                                            ///< 5�����׺�[CAS]�������루OI��
                                                            ///< 7����ͣ (Blocking BL)
                                                            ///< 100: ��δ���� (NO)
                                                            ///< 101������ȡ��/�޸� (NC)
                                                            ///< 102����������Ԥ(EI)
                                                            ///< 103������ (CL)
                                                            ///< 104��ȡ��ί��(OC)
                                                            ///< 105���ο��۶���[CAS]��RP��
                                                            ///< 106������ȡ��[CAS]��NW��
                                                            ///< 107���������[CAS] (RC)
    unsigned int        TradingSesStatus;                   ///< ��ǰ���׽׶�״̬��
                                                            ///< 0��δ֪��ΪNO��
                                                            ///< 1��ͣ�ƣ�����BL��EI��
                                                            ///< 2�����̣�����[POS] OI��[POS] NC��[POS] MA��CT��OC��
                                                            ///< 3���رգ����CL��                 
                                                            ///< 5��Ԥ�رգ�����[CAS] RP��[CAS] NW��[CAS] RC��[CAS] MA��[CAS] OI��
                                                            ///< 100���չر�(����DC)
    char                TradingSesControlFlag;              ///< ��ͬʱ���л���ʽ��־����0�����Զ��� (Ĭ��) ��1�����ֶ��� (���������������Ч)
    long long           StartDateTime;                      ///< ����״̬��ʼʱ�䡣����������ʱ��ΪUTC��ʽ��ת����datetime��ʽ��YYYYMMDDHHMMSSsss
    long long           EndDateTime;                        ///< ����״̬����ʱ�䡣����������ʱ��ΪUTC��ʽ��ת����datetime��ʽ��YYYYMMDDHHMMSSsss
};

/// ��������̬����
typedef SHFEL1_Quotation SHFEL1_Static;

/// ������Դ��̬����
typedef SHFEL1_Quotation INEL1_Static;

/// ������Դʵʱ����
typedef SHFEL1_Quotation INEL1_Quotation;


/// ֤ȯ����
struct StockSymbol
{
    char    Symbol[SYMBOL_LEN + MARKET_TAG_LEN];        ///< ��ѯ�����б��صĹ�Ʊ���룬���г���־
};

/// ��������ַ
struct ServerState
{
    MsgType msgType;            ///< ��Ϣ����
    char    IP[16];             ///< ��������ַ��127.0.0.1
    unsigned short   Port;      ///< �˿�
    bool    Connected;          ///< ����״̬��true-�����У�false-δ����
};

/// �ӳ���Ϣ
struct DelayTimeInfo
{
    char    IP[16];                                         ///< �����������ַ
    unsigned short   Port;                                  ///< �˿�
    int           SendTimeStamp;                            ///< ����ʱ��HHMMSSMMM
    int           RecTimeStamp;                             ///< ����ʱ��HHMMSSMMM  -1Ϊ��ʱ
    int           DelayTime;                                ///< ��ʱֵ����λ(ms)�� -1Ϊ��ʱ
};

#pragma pack()





#endif // GTA_QTS_STRUCT_H_
