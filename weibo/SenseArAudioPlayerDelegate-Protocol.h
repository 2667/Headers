//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol SenseArAudioPlayerDelegate <NSObject>
- (void)audioPlayerWillStopSound:(NSString *)arg1;
- (void)audioPlayerWillPlaySound:(NSString *)arg1 loop:(int)arg2;
- (void)audioPlayerWillLoadSoundData:(NSData *)arg1 withName:(NSString *)arg2;
@end

