//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSNumber, NSString;
@protocol AliDetailKitCouponModel;

@interface AliDetailCouponsModel : TBJSONModel
{
    NSString *_title;
    NSString *_helpUrl;
    NSString *_helpIcon;
    NSString *_lotteryId;
    NSNumber *_type;
    NSString *_asac;
    NSArray<AliDetailKitCouponModel> *_couponList;
}

@property(retain, nonatomic) NSArray<AliDetailKitCouponModel> *couponList; // @synthesize couponList=_couponList;
@property(copy, nonatomic) NSString *asac; // @synthesize asac=_asac;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *lotteryId; // @synthesize lotteryId=_lotteryId;
@property(copy, nonatomic) NSString *helpIcon; // @synthesize helpIcon=_helpIcon;
@property(copy, nonatomic) NSString *helpUrl; // @synthesize helpUrl=_helpUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

