//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBIMBaseRequest.h"

@class NSString;

@interface WBIMJoinChatRoomRequest : WBIMBaseRequest
{
    unsigned long long _containerId;
    unsigned long long _containerType;
    NSString *_dispatchURL;
    unsigned long long _dispatchPort;
}

@property(nonatomic) unsigned long long dispatchPort; // @synthesize dispatchPort=_dispatchPort;
@property(copy, nonatomic) NSString *dispatchURL; // @synthesize dispatchURL=_dispatchURL;
@property(nonatomic) unsigned long long containerType; // @synthesize containerType=_containerType;
@property(nonatomic) unsigned long long containerId; // @synthesize containerId=_containerId;
- (void).cxx_destruct;

@end

