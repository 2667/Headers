//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MBKAbroadPaymentHeaderModel : NSObject
{
    NSString *_titleString;
    NSString *_optionString;
    NSString *_amountString;
    NSString *_amountNumberString;
    double _headerHight;
}

@property(nonatomic) double headerHight; // @synthesize headerHight=_headerHight;
@property(copy, nonatomic) NSString *amountNumberString; // @synthesize amountNumberString=_amountNumberString;
@property(copy, nonatomic) NSString *amountString; // @synthesize amountString=_amountString;
@property(copy, nonatomic) NSString *optionString; // @synthesize optionString=_optionString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void).cxx_destruct;

@end

