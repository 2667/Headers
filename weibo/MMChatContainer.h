//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface MMChatContainer : NSObject
{
    NSMutableArray *_chats;
    NSMutableDictionary *_chatsMapping;
    NSMutableDictionary *_chatsHasUnreadMessage;
}

+ (id)createWithChats:(id)arg1 chatsMapping:(id)arg2 chatsHasUnreadMessage:(id)arg3;
@property(retain, nonatomic) NSMutableDictionary *chatsHasUnreadMessage; // @synthesize chatsHasUnreadMessage=_chatsHasUnreadMessage;
@property(retain, nonatomic) NSMutableDictionary *chatsMapping; // @synthesize chatsMapping=_chatsMapping;
@property(retain, nonatomic) NSMutableArray *chats; // @synthesize chats=_chats;
- (void).cxx_destruct;
- (void)setChat:(id)arg1;

@end

