//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (BRCPathAdditions)
+ (id)brc_fileURLWithVolumeDeviceID:(id)arg1 fileID:(id)arg2 isDirectory:(BOOL)arg3;
+ (id)brc_fileURLWithFileDescriptor:(int)arg1;
- (id)brc_issueSandboxExtensionOfClass:(const char *)arg1 error:(id *)arg2;
@end

