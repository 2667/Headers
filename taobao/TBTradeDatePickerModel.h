//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTradeComponentModel.h"

@class TBTradeDatePickerBase;

@interface TBTradeDatePickerModel : TBTradeComponentModel
{
    TBTradeDatePickerBase *_datePickerBase;
}

@property(retain, nonatomic) TBTradeDatePickerBase *datePickerBase; // @synthesize datePickerBase=_datePickerBase;
- (void).cxx_destruct;
- (void)setSelectedDate:(id)arg1;
- (_Bool)isValidWeekday:(id)arg1 error:(id *)arg2;
- (id)selectedDate;
- (id)endDate;
- (id)beginDate;
- (long long)datePickerMode;
- (id)title;
- (id)validateContent;
- (void)reload:(id)arg1;
- (id)initWithData:(id)arg1 withBuyEngine:(id)arg2;

@end
