//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GPUImageFilter, NSArray;

@interface WBSlideShowTransitionModel : NSObject
{
    double _timeStart;
    double _duration;
    NSArray *_methods;
    GPUImageFilter *_filter;
}

+ (id)transitionModelWithDict:(id)arg1;
@property(retain, nonatomic) GPUImageFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) NSArray *methods; // @synthesize methods=_methods;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double timeStart; // @synthesize timeStart=_timeStart;
- (void).cxx_destruct;
- (void)refreshWithPercent:(double)arg1;
@property(readonly, nonatomic) double timeEnd;
- (id)init;

@end

