//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/FAUpDoEnd.h>

@interface FAUpDoEndC2C : FAUpDoEnd
{
}

- (void)onC2CResult:(id)arg1;
- (void)onSend0x211TimedOut;
- (void)onReportUpSucTimedOut;
- (void)ReportUpSuccess;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)onRspUploadSuccess:(const basic_string_075b6133 *)arg1;
- (id)getOfflineFileInfo:(struct CPBMessageDecoder *)arg1;
- (void)internalDoEnd;
- (id)init:(int)arg1 reportId:(id)arg2 reportDetailId:(id)arg3;

@end
