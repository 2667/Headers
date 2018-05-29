//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GPUImageOutput, NSMutableArray, NSString;
@protocol GPUImageInput;

@interface GPUImageFilterPipeline : NSObject
{
    NSString *stringValue;
    NSMutableArray *_filters;
    GPUImageOutput *_input;
    id <GPUImageInput> _output;
}

@property(retain) id <GPUImageInput> output; // @synthesize output=_output;
@property(retain) GPUImageOutput *input; // @synthesize input=_input;
@property(retain) NSMutableArray *filters; // @synthesize filters=_filters;
- (void).cxx_destruct;
- (struct CGImage *)newCGImageFromCurrentFilteredFrame;
- (id)currentFilteredFrameWithOrientation:(long long)arg1;
- (id)currentFilteredFrame;
- (void)_refreshFilters;
- (void)replaceAllFilters:(id)arg1;
- (void)removeAllFilters;
- (void)removeFilterAtIndex:(unsigned long long)arg1;
- (void)removeFilter:(id)arg1;
- (void)replaceFilterAtIndex:(unsigned long long)arg1 withFilter:(id)arg2;
- (void)addFilter:(id)arg1;
- (void)addFilter:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithOrderedFilters:(id)arg1 input:(id)arg2 output:(id)arg3;
- (_Bool)_parseConfiguration:(id)arg1;
- (id)initWithConfigurationFile:(id)arg1 input:(id)arg2 output:(id)arg3;
- (id)initWithConfiguration:(id)arg1 input:(id)arg2 output:(id)arg3;

@end

