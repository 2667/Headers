//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LOTPAYBaseResp.h"

@class LOTPAYPlayer, NSString;

@interface LOTPAYCommonSetPayResp : LOTPAYBaseResp
{
    NSString *_sessionId;
    LOTPAYPlayer *_player;
}

@property(retain, nonatomic) LOTPAYPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;

@end
