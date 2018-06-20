//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, TDDistiller, TDLogger;

@interface TDDistillRunner : NSObject
{
    BOOL _packDocument;
    TDDistiller *_distiller;
    NSURL *_carScratchURL;
    NSURL *_outputURL;
    TDLogger *_logger;
    NSString *_assetStoreVersionString;
    long long _assetStoreVersionNumber;
    NSString *_minDeploymentTarget;
}

@property(nonatomic) NSString *minDeploymentTarget; // @synthesize minDeploymentTarget=_minDeploymentTarget;
@property long long assetStoreVersionNumber; // @synthesize assetStoreVersionNumber=_assetStoreVersionNumber;
@property(copy) NSString *assetStoreVersionString; // @synthesize assetStoreVersionString=_assetStoreVersionString;
@property(retain, nonatomic) TDLogger *logger; // @synthesize logger=_logger;
@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
- (void)dealloc;
- (BOOL)runDistillWithDocumentURL:(id)arg1 outputURL:(id)arg2 attemptIncremental:(BOOL)arg3 forceDistill:(BOOL)arg4;
@property(nonatomic) BOOL packImagesInDocument;
- (BOOL)_isDistillUnnecessaryForDocument:(id)arg1;
- (void)_moveScratchToOutputPath;
- (void)_removeScratchPath;
- (id)carScratchURL;
- (id)init;

@end

