//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WBTimeStruct : NSObject
{
    double _startTime;
    double _endTime;
    double _accumulation;
}

@property(nonatomic) double accumulation; // @synthesize accumulation=_accumulation;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (double)duration;
- (id)init;

@end

