//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAudioRecorderBase.h>

@interface QQAmrRecorder : QQAudioRecorderBase
{
    struct __sFILE *_fp;
    struct __sFILE *_fpVoiceChange;
    _Bool _dataWithAmrHead;
    struct IXVECodec *mXVECodec;
    void *mCoder;
    struct NsxHandleT *nxHandle;
    int _amrMode;
    _Bool _encodeEnableAgc;
    _Bool _encodeEnableNsx;
    _Bool _needSavePcmFile;
}

@property(nonatomic) _Bool needSavePcmFile; // @synthesize needSavePcmFile=_needSavePcmFile;
@property(nonatomic) _Bool encodeEnableNsx; // @synthesize encodeEnableNsx=_encodeEnableNsx;
@property(nonatomic) _Bool encodeEnableAgc; // @synthesize encodeEnableAgc=_encodeEnableAgc;
- (void)setAmrMode:(int)arg1;
- (int)amrMode;
- (void)enableSomeAbilities;
- (void)disableSomeAbilities;
- (void)saveRecordDataForVoiceChange:(id)arg1 numPackets:(unsigned long long)arg2;
- (void)setAgcAndNsxEnable:(_Bool)arg1;
- (void)saveRecordData:(id)arg1 numPackets:(unsigned long long)arg2 packetDesc:(const struct AudioStreamPacketDescription *)arg3 audioQueue:(struct OpaqueAudioQueue *)arg4;
- (void)calcRecordTimeFromData:(id)arg1 numPackets:(unsigned long long)arg2 audioQueue:(struct OpaqueAudioQueue *)arg3;
- (_Bool)shouldFinishRecord;
- (_Bool)shouldStartRecord;
- (void)initNxHandle;
- (void)encodePcmData:(short *)arg1 length:(unsigned int)arg2;
- (void)encodeBuffer:(short *)arg1 length:(unsigned int)arg2;
- (void)NsDeal:(char *)arg1 length:(int)arg2;
- (_Bool)closeAmrFile:(id)arg1;
- (_Bool)reOpenAmrFile:(id)arg1;
- (_Bool)openFile:(id)arg1;
- (void)dealloc;
- (id)initWithMode:(int)arg1;
- (void)initAgc;

@end

