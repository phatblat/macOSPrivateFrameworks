//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DEExtensionManager, NSMutableArray;

__attribute__((visibility("hidden")))
@interface DiagnosticExtensionCaller : NSObject
{
    DEExtensionManager *_manager;
    NSMutableArray *_liveDEs;
}

+ (BOOL)getAttachmentsFrom:(id)arg1 forBundleID:(id)arg2 withParameters:(id)arg3 queue:(id)arg4 reply:(CDUnknownBlockType)arg5;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_getAttachmentsFrom:(id)arg1 forBundleID:(id)arg2 withParameters:(id)arg3 queue:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (id)_getDEExtensionWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end

