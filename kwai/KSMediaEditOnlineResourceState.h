//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LYWState.h"

@class NSError;

@interface KSMediaEditOnlineResourceState : LYWState
{
    int _state;
    float _progress;
    NSError *_error;
}

@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;

@end

