//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MBKMoCarFinishOrderAndPollResponse : NSObject
{
    _Bool _shortJourney;
    _Bool _doorState;
    _Bool _motorState;
    _Bool _lampState;
    NSString *_carId;
}

@property(nonatomic) _Bool lampState; // @synthesize lampState=_lampState;
@property(nonatomic) _Bool motorState; // @synthesize motorState=_motorState;
@property(nonatomic) _Bool doorState; // @synthesize doorState=_doorState;
@property(nonatomic) _Bool shortJourney; // @synthesize shortJourney=_shortJourney;
@property(copy, nonatomic) NSString *carId; // @synthesize carId=_carId;
- (void).cxx_destruct;

@end

