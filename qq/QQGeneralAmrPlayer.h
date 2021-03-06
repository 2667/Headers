//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAmrPlayer.h>

#import <QQMainProject/QQAudioProximitySensorProtocol-Protocol.h>
#import <QQMainProject/QQAudioSessionManagerDelegate-Protocol.h>

@class NSString;

@interface QQGeneralAmrPlayer : QQAmrPlayer <QQAudioProximitySensorProtocol, QQAudioSessionManagerDelegate>
{
    _Bool _slientWhenMuteOn;
    _Bool _autoChange;
}

- (void)onProximitySensorStateChange:(_Bool)arg1;
- (void)setAutoChangePlayMode:(_Bool)arg1;
- (void)onAudioSessionActive;
- (void)onIntterruptEnd;
- (void)onIntterruptBegin;
- (void)onPlayEnd;
- (_Bool)play:(id)arg1;
- (void)setSilentWhenMuteOn:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

