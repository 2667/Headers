//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQPbMsgSenderBase.h>

@interface QQWPAMsgSender : QQPbMsgSenderBase
{
}

+ (id)GetInstance;
- (_Bool)OnReceiveSendMsgRespOfSendSeq:(unsigned int)arg1 ResultCode:(unsigned int)arg2 ErrMsg:(const basic_string_075b6133 *)arg3 ReqSendTimeFromServer:(unsigned int)arg4 textResult:(unsigned int)arg5;
- (struct RoutingHead *)genRoutingHead:(id)arg1;
- (int)getMsgSendType:(id)arg1;
- (id)SendingModelToUin:(long long)arg1 TimeStamp:(int)arg2 MsgId:(int)arg3 pkgNum:(BOOL)arg4 divSeq:(short)arg5 DispContent:(id)arg6 MsgType:(int)arg7 BodyType:(int)arg8;
- (struct WPATmp *)GenPassiveReplyWPATmpToUin:(unsigned long long)arg1 SeviceType:(unsigned int)arg2 Sig:(id)arg3;
- (struct WPATmp *)GenInitiativeSendWPATmpToUin:(unsigned long long)arg1;

@end

