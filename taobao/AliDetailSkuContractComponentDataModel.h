//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliDetailSkuContractAreaList, AliDetailSkuContractCity, AliDetailSkuContractNetStandardList, AliDetailSkuContractPlanList, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface AliDetailSkuContractComponentDataModel : TBJSONModel
{
    _Bool _isNeedPhoneNum;
    _Bool _isSellerFlag;
    NSArray *_componentList;
    NSDictionary *_componentNameMap;
    long long _componentType;
    AliDetailSkuContractAreaList *_areaList;
    AliDetailSkuContractPlanList *_planList;
    AliDetailSkuContractNetStandardList *_netStandardList;
    AliDetailSkuContractCity *_defaultSelectedCity;
    NSString *_phoneNumTitle;
    NSMutableDictionary *_cityMap;
}

+ (id)modelWithContractArray:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *cityMap; // @synthesize cityMap=_cityMap;
@property(copy, nonatomic) NSString *phoneNumTitle; // @synthesize phoneNumTitle=_phoneNumTitle;
@property(nonatomic) _Bool isSellerFlag; // @synthesize isSellerFlag=_isSellerFlag;
@property(nonatomic) _Bool isNeedPhoneNum; // @synthesize isNeedPhoneNum=_isNeedPhoneNum;
@property(retain, nonatomic) AliDetailSkuContractCity *defaultSelectedCity; // @synthesize defaultSelectedCity=_defaultSelectedCity;
@property(retain, nonatomic) AliDetailSkuContractNetStandardList *netStandardList; // @synthesize netStandardList=_netStandardList;
@property(retain, nonatomic) AliDetailSkuContractPlanList *planList; // @synthesize planList=_planList;
@property(retain, nonatomic) AliDetailSkuContractAreaList *areaList; // @synthesize areaList=_areaList;
@property(nonatomic) long long componentType; // @synthesize componentType=_componentType;
@property(retain, nonatomic) NSDictionary *componentNameMap; // @synthesize componentNameMap=_componentNameMap;
@property(retain, nonatomic) NSArray *componentList; // @synthesize componentList=_componentList;
- (void).cxx_destruct;
- (id)getCityMap;

@end

