//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FMDownloadOptions : NSObject
{
    BOOL _allowsCellular;
    unsigned long long _downloadPriority;
}

@property(nonatomic) unsigned long long downloadPriority; // @synthesize downloadPriority=_downloadPriority;
@property(nonatomic) BOOL allowsCellular; // @synthesize allowsCellular=_allowsCellular;
- (id)description;
- (void)_configureDefaults;
- (id)init;

@end

