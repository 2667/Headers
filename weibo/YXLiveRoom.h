//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBSharingObject-Protocol.h"

@class NSString, WBTimelinePageInfo, WBTimelineURL;

@interface YXLiveRoom : NSObject <WBSharingObject>
{
    NSString *_containerID;
    NSString *_desc;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
- (void).cxx_destruct;
@property(readonly, nonatomic) WBTimelineURL *miniCard;
- (id)composeJobPropertiesWithComposeElement:(id)arg1;
- (id)composeJobParametersWithComposeElement:(id)arg1;
@property(readonly, nonatomic) long long composeSharingType;
@property(readonly, nonatomic) WBTimelinePageInfo *sharingPageInfo;
- (id)extraMessageID;
- (id)sharingTextConent;
- (long long)extraMessageType;

// Remaining properties
@property(readonly, nonatomic) unsigned long long contentLength;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long extraMessageUid;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *pageUrl;
@property(readonly, nonatomic) _Bool removable;
@property(readonly) Class superclass;

@end

