//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSString;

@interface AMPNetRelationQueryUserInfo : AMPNetPacket
{
    NSString *_queryUserInfoString;
}

@property(copy, nonatomic) NSString *queryUserInfoString; // @synthesize queryUserInfoString=_queryUserInfoString;
- (void).cxx_destruct;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithQueryUserInfoString:(id)arg1;

@end
