//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoFoundation/PFWorkContext.h>

@class NSMutableArray;

@interface PFFileManagerWorkContext : PFWorkContext
{
    BOOL _skipResultNotification;
    CDUnknownBlockType _fileOperationPostAction;
    CDUnknownBlockType _fileOperationPostBatchAction;
    CDUnknownBlockType _filterPath;
    NSMutableArray *_successfulOperations;
    NSMutableArray *_failedOperations;
    id <PFFileManagerDelegate> _fileManagerDelegate;
}

@property(retain) id <PFFileManagerDelegate> fileManagerDelegate; // @synthesize fileManagerDelegate=_fileManagerDelegate;
@property(retain) NSMutableArray *failedOperations; // @synthesize failedOperations=_failedOperations;
@property(retain) NSMutableArray *successfulOperations; // @synthesize successfulOperations=_successfulOperations;
@property BOOL skipResultNotification; // @synthesize skipResultNotification=_skipResultNotification;
@property(copy, nonatomic) CDUnknownBlockType filterPath; // @synthesize filterPath=_filterPath;
@property(copy, nonatomic) CDUnknownBlockType fileOperationPostBatchAction; // @synthesize fileOperationPostBatchAction=_fileOperationPostBatchAction;
@property(copy, nonatomic) CDUnknownBlockType fileOperationPostAction; // @synthesize fileOperationPostAction=_fileOperationPostAction;
- (void).cxx_destruct;

@end

