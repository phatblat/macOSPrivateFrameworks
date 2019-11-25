//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ML3MusicLibraryResourcesProviding.h"
#import "NSSecureCoding.h"

@class ML3MusicLibraryResourcesManagerContext, NSString, _ML3BaseMusicLibraryResourcesManager;

@interface ML3MusicLibraryResourcesManager : NSObject <NSSecureCoding, ML3MusicLibraryResourcesProviding>
{
    ML3MusicLibraryResourcesManagerContext *_context;
    _ML3BaseMusicLibraryResourcesManager *_implementation;
}

+ (BOOL)supportsSecureCoding;
+ (id)sharedManager;
@property(retain, nonatomic) _ML3BaseMusicLibraryResourcesManager *implementation; // @synthesize implementation=_implementation;
@property(retain, nonatomic) ML3MusicLibraryResourcesManagerContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBaseResourcesManager:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)pathForBaseLocationPath:(long long)arg1;
- (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 createParentFolderIfNecessary:(BOOL)arg4;
- (id)pathForResourceFileOrFolder:(int)arg1;
- (id)libraryContainerRelativePath:(id)arg1;
- (id)libraryContainerPathByAppendingPathComponent:(id)arg1;
- (id)libraryContainerPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

