//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KABAOPRODKabaoCommonResult.h"

@class KABAOPRODUserAssetInfo, NSDictionary, NSString;

@interface UserAccountInfoRes : KABAOPRODKabaoCommonResult
{
    _Bool _queryCoupon;
    _Bool _showCreditScore;
    int _pointNums;
    int _couponNums;
    NSString *_bindingMobileNo;
    double _availableBalance;
    KABAOPRODUserAssetInfo *_userAssetInfo;
    NSDictionary *_contextMap;
}

+ (Class)contextMapElementClass;
@property(retain, nonatomic) NSDictionary *contextMap; // @synthesize contextMap=_contextMap;
@property(retain, nonatomic) KABAOPRODUserAssetInfo *userAssetInfo; // @synthesize userAssetInfo=_userAssetInfo;
@property(nonatomic) _Bool showCreditScore; // @synthesize showCreditScore=_showCreditScore;
@property(nonatomic) _Bool queryCoupon; // @synthesize queryCoupon=_queryCoupon;
@property(nonatomic) int couponNums; // @synthesize couponNums=_couponNums;
@property(nonatomic) int pointNums; // @synthesize pointNums=_pointNums;
@property(nonatomic) double availableBalance; // @synthesize availableBalance=_availableBalance;
@property(retain, nonatomic) NSString *bindingMobileNo; // @synthesize bindingMobileNo=_bindingMobileNo;
- (void).cxx_destruct;

@end

