//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBKUnifiedPaymentSign, NSString;

@interface MBKUnifiedPaymentResponse : NSObject
{
    _Bool _apply;
    _Bool _sync;
    NSString *_tradeNo;
    NSString *_subTradeNo;
    MBKUnifiedPaymentSign *_sign;
}

+ (id)jsonKeyToClassNameMap;
@property(retain, nonatomic) MBKUnifiedPaymentSign *sign; // @synthesize sign=_sign;
@property(copy, nonatomic) NSString *subTradeNo; // @synthesize subTradeNo=_subTradeNo;
@property(copy, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
@property(nonatomic) _Bool sync; // @synthesize sync=_sync;
@property(nonatomic) _Bool apply; // @synthesize apply=_apply;
- (void).cxx_destruct;

@end

