//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ML3MusicLibrary, NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface ML3Artwork : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    long long _artworkType;
    long long _sourceType;
    NSDictionary *_interestDictionary;
    ML3MusicLibrary *_musicLibrary;
    NSString *_artworkToken;
    NSString *_relativePath;
    NSURL *_originalFileURL;
}

@property(readonly, nonatomic) NSURL *originalFileURL; // @synthesize originalFileURL=_originalFileURL;
@property(readonly, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
@property(readonly, nonatomic) NSString *artworkToken; // @synthesize artworkToken=_artworkToken;
@property(readonly, nonatomic) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
- (void).cxx_destruct;
- (id)_interestDataFromInterestDictionary:(id)arg1;
- (id)_interestDictionaryFromInterestData:(id)arg1;
- (void)_onSerialQueue_faultInProperties;
@property(retain, nonatomic) NSDictionary *interestDictionary; // @synthesize interestDictionary=_interestDictionary;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) long long artworkType; // @synthesize artworkType=_artworkType;
- (id)fileURLForEffect:(id)arg1;
- (id)fileURLForSize:(struct CGSize)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithToken:(id)arg1 relativePath:(id)arg2 artworkType:(long long)arg3 musicLibrary:(id)arg4;
- (id)initWithToken:(id)arg1 artworkType:(long long)arg2 musicLibrary:(id)arg3;

@end

