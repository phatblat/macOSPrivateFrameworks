//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMCopyEngineFileCopier.h>

@interface SMCopyEngineNopCopier : SMCopyEngineFileCopier
{
    BOOL _skipPreflight;
    BOOL _sourceIsTimeMachine;
    BOOL _overwriteDestination;
}

@property BOOL overwriteDestination; // @synthesize overwriteDestination=_overwriteDestination;
@property BOOL sourceIsTimeMachine; // @synthesize sourceIsTimeMachine=_sourceIsTimeMachine;
@property BOOL skipPreflight; // @synthesize skipPreflight=_skipPreflight;
- (BOOL)shouldSkipFileAtPath:(id)arg1;
- (BOOL)doOperation:(unsigned int)arg1 from:(id)arg2 to:(id)arg3 error:(id *)arg4;
- (BOOL)processReturningError:(id *)arg1;

@end

