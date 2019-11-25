//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PackageKit/PKMutableArchive.h>

@class NSString;

@interface PKFolderArchive : PKMutableArchive
{
    NSString *_archivePath;
}

- (BOOL)closeArchive;
- (BOOL)fileExistsAtPath:(id)arg1;
- (BOOL)verifyReturningError:(id *)arg1;
- (id)fileAttributesAtPath:(id)arg1;
- (BOOL)extractItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (id)dataForPath:(id)arg1;
- (id)enumeratorAtPath:(id)arg1;
- (id)archivePath;
- (void)dealloc;
- (id)initForReadingFromPath:(id)arg1 options:(id)arg2;
- (id)initForReadingFromPath:(id)arg1;
- (BOOL)setContentsOfArchive:(id)arg1 forPath:(id)arg2;
- (BOOL)setFile:(id)arg1 forPath:(id)arg2 compressed:(BOOL)arg3;
- (BOOL)setData:(id)arg1 forPath:(id)arg2 compressed:(BOOL)arg3;
- (id)initForWritingToPath:(id)arg1 error:(id *)arg2;
- (id)archiveSignatures;

@end

