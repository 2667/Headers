//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBKCarHailingOrder, NSAttributedString, NSString;

@interface MBKEndTripStatusLineViewModel : NSObject
{
    NSAttributedString *_tripAttributedString;
    MBKCarHailingOrder *_order;
    NSString *_priceString;
    NSString *_statusString;
    NSString *_tipsString;
}

@property(copy, nonatomic) NSString *tipsString; // @synthesize tipsString=_tipsString;
@property(copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(copy, nonatomic) NSString *priceString; // @synthesize priceString=_priceString;
@property(retain, nonatomic) MBKCarHailingOrder *order; // @synthesize order=_order;
@property(copy, nonatomic) NSAttributedString *tripAttributedString; // @synthesize tripAttributedString=_tripAttributedString;
- (void).cxx_destruct;
- (id)showStringSignal;
- (id)init;

@end
