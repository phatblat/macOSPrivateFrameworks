//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TFileSystemOperationDelegate.h>

__attribute__((visibility("hidden")))
@interface FI_TNewAliasOperationDelegate : FI_TFileSystemOperationDelegate
{
    _Bool _allowInteraction;
}

@property _Bool allowInteraction; // @synthesize allowInteraction=_allowInteraction;
- (int)asyncNodeOperation:(id)arg1 uniqueNameProc:(id)arg2 seedFileSuffix:(id)arg3 reservedName:(id)arg4;
- (int)asyncNodeOperation:(id)arg1 errorNotification:(const struct TOperationMonitor *)arg2 error:(const struct OperationErrorRecord *)arg3 reply:(struct NodeEventReply *)arg4;
- (id)init;

@end

