//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TTAdImpressionTracker : NSObject
{
    NSMutableDictionary *_trackers;
}

+ (id)sharedImpressionTracker;
@property(retain, nonatomic) NSMutableDictionary *trackers; // @synthesize trackers=_trackers;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)reset:(id)arg1;
- (void)startTrackForce;
- (id)endTrack:(id)arg1;
- (void)track:(id)arg1 tracker:(id)arg2;
- (void)track:(id)arg1 visible:(struct CGRect)arg2 scrollView:(id)arg3 movieCell:(id)arg4;
- (void)track:(id)arg1 visible:(struct CGRect)arg2 scrollView:(id)arg3;

@end

