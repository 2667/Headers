//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MMA_MonitorMedium, NSString;

@interface WBAdAutoMonitorObject : NSObject
{
    NSString *_promotionAddress;
    MMA_MonitorMedium *_monitorMedium;
    NSString *_viewAddress;
}

+ (id)objectWithPromotionAddress:(id)arg1 viewAddress:(id)arg2 monitorMedium:(id)arg3;
@property(retain, nonatomic) NSString *viewAddress; // @synthesize viewAddress=_viewAddress;
@property(nonatomic) __weak MMA_MonitorMedium *monitorMedium; // @synthesize monitorMedium=_monitorMedium;
@property(retain, nonatomic) NSString *promotionAddress; // @synthesize promotionAddress=_promotionAddress;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end

