//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface NlsRequestTTS : NSObject
{
    NSString *_version;
    NSString *_text;
    NSString *_format;
    NSString *_encode_type;
    NSString *_sample_rate;
    long long _speech_rate;
    long long _volume;
    long long _nus;
    NSString *_voice;
    NSString *_refer;
    long long _pitch_rate;
    long long _background_music_id;
    long long _background_music_offset;
    long long _background_music_volume;
}

@property(nonatomic) long long background_music_volume; // @synthesize background_music_volume=_background_music_volume;
@property(nonatomic) long long background_music_offset; // @synthesize background_music_offset=_background_music_offset;
@property(nonatomic) long long background_music_id; // @synthesize background_music_id=_background_music_id;
@property(nonatomic) long long pitch_rate; // @synthesize pitch_rate=_pitch_rate;
@property(copy, nonatomic) NSString *refer; // @synthesize refer=_refer;
@property(copy, nonatomic) NSString *voice; // @synthesize voice=_voice;
@property(nonatomic) long long nus; // @synthesize nus=_nus;
@property(nonatomic) long long volume; // @synthesize volume=_volume;
@property(nonatomic) long long speech_rate; // @synthesize speech_rate=_speech_rate;
@property(copy, nonatomic) NSString *sample_rate; // @synthesize sample_rate=_sample_rate;
@property(copy, nonatomic) NSString *encode_type; // @synthesize encode_type=_encode_type;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)setTtsBackgroundMusicVolume:(long long)arg1;
- (void)setTtsBackgroundMusicOffset:(long long)arg1;
- (void)setTtsBackgroundMusicId:(long long)arg1;
- (void)setTtsPitchRate:(long long)arg1;
- (void)setTtsPronRefer:(id)arg1;
- (void)setTtsVoice:(id)arg1;
- (void)setTtsNus:(long long)arg1;
- (void)setTtsVolume:(long long)arg1;
- (void)setTtsSpeechRate:(long long)arg1;
- (void)setTtsSampleRate:(id)arg1;
- (void)setTtsEncodeType:(id)arg1;
- (void)setTtsText:(id)arg1;
- (id)init;

@end

