//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMSSHSession;

@interface NMSFTP : NSObject
{
    BOOL _connected;
    NMSSHSession *_session;
    struct _LIBSSH2_SFTP *_sftpSession;
}

+ (id)connectWithSession:(id)arg1;
@property(nonatomic) struct _LIBSSH2_SFTP *sftpSession; // @synthesize sftpSession=_sftpSession;
@property(nonatomic, getter=isConnected) BOOL connected; // @synthesize connected=_connected;
@property(retain, nonatomic) NMSSHSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (BOOL)copyContentsOfPath:(id)arg1 toFileAtPath:(id)arg2 progress:(CDUnknownBlockType)arg3;
- (BOOL)writeStream:(id)arg1 toSFTPHandle:(struct _LIBSSH2_SFTP_HANDLE *)arg2 progress:(CDUnknownBlockType)arg3;
- (BOOL)writeStream:(id)arg1 toSFTPHandle:(struct _LIBSSH2_SFTP_HANDLE *)arg2;
- (BOOL)appendStream:(id)arg1 toFileAtPath:(id)arg2;
- (BOOL)appendContents:(id)arg1 toFileAtPath:(id)arg2;
- (BOOL)writeStream:(id)arg1 toFileAtPath:(id)arg2 progress:(CDUnknownBlockType)arg3;
- (BOOL)writeStream:(id)arg1 toFileAtPath:(id)arg2;
- (BOOL)writeFileAtPath:(id)arg1 toFileAtPath:(id)arg2 progress:(CDUnknownBlockType)arg3;
- (BOOL)writeFileAtPath:(id)arg1 toFileAtPath:(id)arg2;
- (BOOL)writeContents:(id)arg1 toFileAtPath:(id)arg2 progress:(CDUnknownBlockType)arg3;
- (BOOL)writeContents:(id)arg1 toFileAtPath:(id)arg2;
- (id)contentsAtPath:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (id)contentsAtPath:(id)arg1;
- (BOOL)removeFileAtPath:(id)arg1;
- (BOOL)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2;
- (BOOL)fileExistsAtPath:(id)arg1;
- (struct _LIBSSH2_SFTP_HANDLE *)openFileAtPath:(id)arg1 flags:(unsigned long long)arg2 mode:(long long)arg3;
- (id)infoForFileAtPath:(id)arg1;
- (id)contentsOfDirectoryAtPath:(id)arg1;
- (BOOL)removeDirectoryAtPath:(id)arg1;
- (BOOL)createDirectoryAtPath:(id)arg1;
- (BOOL)directoryExistsAtPath:(id)arg1;
- (struct _LIBSSH2_SFTP_HANDLE *)openDirectoryAtPath:(id)arg1;
- (BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2;
- (void)disconnect;
- (BOOL)connect;
- (id)initWithSession:(id)arg1;

@end

