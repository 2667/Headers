//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQC2CMsgTableOperation_Multiple.h>

@interface QQRecentMsgTableOperation : QQC2CMsgTableOperation_Multiple
{
}

- (void)updateMessageExInfo:(id)arg1 inDb:(id)arg2;
- (id)getExInfoDataFromMessageModel:(id)arg1 inDb:(id)arg2;
- (void)updateMessagePicUrlOfRichInfo:(id)arg1 inDb:(id)arg2;
- (void)updateMessageRichInfo:(id)arg1 inDb:(id)arg2;
- (void)SetC2CMsgSendStateWithMsgID:(id)arg1 state:(int)arg2 uin:(id)arg3 inDb:(id)arg4;
- (unsigned long long)getTableSign;
- (void)updateReadStateWithMessageModel:(id)arg1 inDb:(id)arg2;
- (double)maxMessageTimeOfUin:(id)arg1 inDb:(id)arg2;
- (_Bool)updateRecentMsgWithSendResultMoedls:(id)arg1 inDb:(id)arg2;
- (id)getRecentC2CMsg:(id)arg1 withLimitCount:(int)arg2;
- (id)getRecentC2CMsg:(id)arg1 withUins:(id)arg2;
- (id)commonC2CMsgFromQueryResult:(id)arg1;
- (void)directInsertRecentMsg:(id)arg1 exMsgId:(int)arg2 inDb:(id)arg3;
- (void)insertRecentMsg:(id)arg1 exMsgId:(int)arg2 inDb:(id)arg3;
- (void)createindex:(id)arg1 inDb:(id)arg2;
- (void)createTableWithName:(id)arg1 inDb:(id)arg2;
- (id)getCreateTableSql:(id)arg1;

@end

