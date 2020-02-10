//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalReminderMigrator.h"

@class NSString, NSURL;

@interface CalOutOfProcessReminderMigrator : NSObject <CalReminderMigrator>
{
    NSURL *_urlForTool;
}

@property(readonly, nonatomic) NSURL *urlForTool; // @synthesize urlForTool=_urlForTool;
- (void).cxx_destruct;
- (BOOL)_invokeToolWithArgument:(id)arg1;
- (BOOL)attemptMigrationWithHomeDirectory:(id)arg1;
- (BOOL)testInvocationWithSuccess:(BOOL)arg1;
- (id)initWithURLForTool:(id)arg1;
- (id)initWithBundleContainingTool:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
