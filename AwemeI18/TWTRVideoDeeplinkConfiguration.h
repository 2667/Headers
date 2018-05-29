//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface TWTRVideoDeeplinkConfiguration : NSObject
{
    NSString *_displayText;
    NSURL *_targetURL;
    NSURL *_metricsURL;
}

@property(readonly, nonatomic) NSURL *metricsURL; // @synthesize metricsURL=_metricsURL;
@property(readonly, nonatomic) NSURL *targetURL; // @synthesize targetURL=_targetURL;
@property(readonly, copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
- (void).cxx_destruct;
- (_Bool)isEqualToDeeplinkConfiguration:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDisplayText:(id)arg1 targetURL:(id)arg2 metricsURL:(id)arg3;

@end

