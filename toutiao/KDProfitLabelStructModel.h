//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSString;
@protocol Optional;

@interface KDProfitLabelStructModel : WDBaseModel
{
    NSString *_icon_url;
    NSString *_text;
    NSString<Optional> *_profit_amount;
}

@property(retain, nonatomic) NSString<Optional> *profit_amount; // @synthesize profit_amount=_profit_amount;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *icon_url; // @synthesize icon_url=_icon_url;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

