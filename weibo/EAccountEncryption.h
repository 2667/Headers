//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface EAccountEncryption : NSObject
{
}

+ (id)AES128DecryptWithKey:(id)arg1 gIv:(id)arg2 decrypData:(id)arg3;
+ (id)dataForHexString:(id)arg1;
+ (id)decrypt:(id)arg1 password:(id)arg2;
+ (id)hexStringForData:(id)arg1;
+ (id)decryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;
+ (id)stripPrivateKeyHeader:(id)arg1;
+ (struct __SecKey *)addPrivateKey:(id)arg1;
+ (id)decryptData:(id)arg1 privateKey:(id)arg2;
+ (id)decryptString:(id)arg1 privateKey:(id)arg2;
+ (id)encryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;
+ (id)stripPublicKeyHeader:(id)arg1;
+ (struct __SecKey *)addPublicKey:(id)arg1;
+ (id)encryptData:(id)arg1 publicKey:(id)arg2;
+ (id)convertDataToHexStr:(id)arg1;
+ (id)encryptString:(id)arg1 publicKey:(id)arg2;
+ (id)encryptString:(id)arg1 publicKeyRef:(struct __SecKey *)arg2;
+ (struct __SecKey *)getPublicKeyRefWithContentsOfFile:(id)arg1;
+ (id)encryptString:(id)arg1 publicKeyWithContentsOfFile:(id)arg2;
+ (id)AES128EncryptWithKey:(id)arg1 gIv:(id)arg2 messageData:(id)arg3;
+ (id)hmacSha1WithKey:(id)arg1 text:(id)arg2;
+ (id)hex:(id)arg1 useLower:(_Bool)arg2;
+ (id)encrypt:(id)arg1 password:(id)arg2;

@end

