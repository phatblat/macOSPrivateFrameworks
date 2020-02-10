//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FPOperation.h"

#import "FPOperationClient.h"

@class NSArray, NSMutableArray, NSProgress;

@interface FPDFetchAppLibraryIconOperation : FPOperation <FPOperationClient>
{
    struct CGSize _desiredSize;
    double _screenScale;
    NSMutableArray *_appBundleIDsNotFound;
    BOOL _allowLocalLookup;
    BOOL _allowAppStoreLookup;
    NSArray *_appBundleIDs;
    NSProgress *_progress;
    CDUnknownBlockType _perAppBundleCompletion;
}

+ (id)sharedOperationQueue;
@property(nonatomic) BOOL allowAppStoreLookup; // @synthesize allowAppStoreLookup=_allowAppStoreLookup;
@property(nonatomic) BOOL allowLocalLookup; // @synthesize allowLocalLookup=_allowLocalLookup;
@property(copy, nonatomic) CDUnknownBlockType perAppBundleCompletion; // @synthesize perAppBundleCompletion=_perAppBundleCompletion;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) NSArray *appBundleIDs; // @synthesize appBundleIDs=_appBundleIDs;
- (void).cxx_destruct;
- (void)_perAppBundleCompletion:(id)arg1 iconData:(id)arg2 contentType:(id)arg3 error:(id)arg4;
- (void)_retrieveIconsFromAppStore;
- (void)_retrieveIconsFromLocalDevice;
- (BOOL)_checkIsNotPrefixedByTeamID:(id)arg1;
- (BOOL)_checkTypeIsValid:(id)arg1;
- (void)_verifyAppBundleIDsFormat;
- (void)main;
- (void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithAppBundleIDs:(id)arg1 desiredSize:(struct CGSize)arg2 screenScale:(double)arg3;

@end
