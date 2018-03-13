//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DataDetectors/DDPatternCompiler.h>

@class NSOperationQueue;

@interface DDThreadManager : DDPatternCompiler
{
    struct __DDScanner *_scanner;
    NSOperationQueue *_queue;
    BOOL _stopping;
    BOOL _includeOptionalSources;
}

@property BOOL includeOptionalSources; // @synthesize includeOptionalSources=_includeOptionalSources;
- (void).cxx_destruct;
- (void)compilationFinished:(id)arg1;
- (void)_setScanner:(id)arg1;
- (void)_updateScannerSetup;
- (void)cancelOperationForIdentifier:(id)arg1;
- (id)queueTextToScanInController:(id)arg1 identifier:(id)arg2 delegate:(id)arg3 retryCount:(int)arg4;
- (id)queueTextToScanInWebView:(id)arg1 identifier:(id)arg2 delegate:(id)arg3 retryCount:(int)arg4;
- (id)scanner;
- (void)dealloc;
- (void)deactivate;
- (id)init;
- (id)initWithScanner:(struct __DDScanner *)arg1;

@end

