//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SpriteMsgPushSvrEngine : NSObject
{
}

+ (id)parseSpriteGameHotChatADModelWithPBObj:(struct CPBMessageDecoder *)arg1 model:(id)arg2;
+ (id)parseSpriteMsgActionWorkForFriend:(struct CPBMessageDecoder *)arg1 model:(id)arg2;
+ (id)parseSpriteRedBagMsgWithPBObj:(struct CPBMessageDecoder *)arg1 model:(id)arg2;
+ (void)parseSTPushMsgElemWith:(struct CPBMessageDecoder *)arg1 sessionId:(id)arg2 aioType:(int)arg3;
+ (void)parseC2CSubMsgType0xe8:(const void *)arg1 DataLen:(int)arg2;

@end

