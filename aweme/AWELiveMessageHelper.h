//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AWELiveMessageHelper : NSObject
{
}

+ (id)fetchLivePresentModelForPresentID:(id)arg1;
+ (id)liveDisplayName:(id)arg1;
+ (void)clearStaticVariable;
+ (id)getMessageFont;
+ (id)paragraphStyle;
+ (_Bool)isMemberMessageSendToCurrentDeviceUser:(id)arg1;
+ (id)getUserModelFromMessage:(id)arg1;
+ (id)getAvatarImageUrlWithMessage:(id)arg1;
+ (id)getContentAttributesDic:(id)arg1;
+ (id)getTitleAttributesDic:(id)arg1;
+ (id)matchAtNamePatten:(id)arg1 message:(id)arg2;
+ (id)handleMessageToString:(id)arg1;
+ (_Bool)shouldMessageShowInMessageList:(id)arg1;
+ (_Bool)isShareMessage:(id)arg1;
+ (_Bool)isKickOutMessage:(id)arg1;
+ (_Bool)isBanMessage:(id)arg1;
+ (_Bool)isEnterMessage:(id)arg1;
+ (struct _NSRange)getLinkRange:(id)arg1;

@end

