//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MBKMocarPreviewAmountResponse : NSObject
{
    _Bool _hasCoupon;
    NSString *_couponUserId;
    NSNumber *_deductionFee;
    NSNumber *_payFee;
}

@property(retain, nonatomic) NSNumber *payFee; // @synthesize payFee=_payFee;
@property(nonatomic) _Bool hasCoupon; // @synthesize hasCoupon=_hasCoupon;
@property(retain, nonatomic) NSNumber *deductionFee; // @synthesize deductionFee=_deductionFee;
@property(copy, nonatomic) NSString *couponUserId; // @synthesize couponUserId=_couponUserId;
- (void).cxx_destruct;

@end

