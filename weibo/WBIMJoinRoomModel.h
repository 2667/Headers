//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBIMBaseModel.h"

@class NSDictionary, WBIMRoom, WBIMUser;

@interface WBIMJoinRoomModel : WBIMBaseModel
{
    WBIMRoom *_roomInfo;
    WBIMUser *_ownerInfo;
    long long _role;
    long long _isShutted;
    long long _shuttedUntil;
    NSDictionary *_questisonInfo;
}

@property(retain, nonatomic) NSDictionary *questisonInfo; // @synthesize questisonInfo=_questisonInfo;
@property(nonatomic) long long shuttedUntil; // @synthesize shuttedUntil=_shuttedUntil;
@property(nonatomic) long long isShutted; // @synthesize isShutted=_isShutted;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(retain, nonatomic) WBIMUser *ownerInfo; // @synthesize ownerInfo=_ownerInfo;
@property(retain, nonatomic) WBIMRoom *roomInfo; // @synthesize roomInfo=_roomInfo;
- (void).cxx_destruct;
- (id)init;

@end

