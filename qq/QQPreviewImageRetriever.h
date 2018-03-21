//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQURLRichMsgHelperDelegate-Protocol.h>

@class NSDate, NSString, QQURLRichMsgHelper;
@protocol QQPreviewImageDelegate;

@interface QQPreviewImageRetriever : NSObject <QQURLRichMsgHelperDelegate>
{
    NSString *_loadingPreImgPath;
    NSDate *_richStartTime;
    NSDate *_downLoadStartTime;
    NSString *_strRichSourceUrl;
    unsigned int _appShareID;
    QQURLRichMsgHelper *_urlRichMsgHelper;
    id <QQPreviewImageDelegate> _delegate;
    NSDate *_beginSvrDownload;
}

@property(retain, nonatomic) NSDate *beginSvrDownload; // @synthesize beginSvrDownload=_beginSvrDownload;
@property(nonatomic) __weak id <QQPreviewImageDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QQURLRichMsgHelper *urlRichMsgHelper; // @synthesize urlRichMsgHelper=_urlRichMsgHelper;
- (void).cxx_destruct;
- (void)reportRichResult:(id)arg1 errorCode:(int)arg2;
- (void)onResponseRichMsgData:(id)arg1 errorCode:(int)arg2;
- (void)HandleGetPluginInfoResp:(id)arg1;
- (void)reportDownImgInfo:(_Bool)arg1 url:(id)arg2 error:(int)arg3;
- (void)getImageDownloadErrorNotification:(id)arg1;
- (void)getImageFinishNotification:(id)arg1;
- (void)startDownImg;
- (void)startServerDownload:(id)arg1;
- (id)getPreviewImage:(id)arg1 imgUrl:(id)arg2 fileType:(id)arg3 appShareID:(unsigned int)arg4 isLoading:(_Bool *)arg5 withRichSourceUrl:(id)arg6;
- (id)getPreviewImage:(id)arg1 imgUrl:(id)arg2 fileType:(id)arg3 appShareID:(unsigned int)arg4 isLoading:(_Bool *)arg5;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
