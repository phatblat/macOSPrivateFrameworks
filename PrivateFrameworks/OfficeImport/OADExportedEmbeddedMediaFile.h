//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADEmbeddedMediaFile.h>

@class TSPData;

@interface OADExportedEmbeddedMediaFile : OADEmbeddedMediaFile
{
    BOOL isAudioOnly;
    TSPData *_tspData;
}

@property(retain, nonatomic) TSPData *tspData; // @synthesize tspData=_tspData;
- (void)setIsAudioOnly:(BOOL)arg1;
- (BOOL)isAudioOnly;
- (void).cxx_destruct;

@end
