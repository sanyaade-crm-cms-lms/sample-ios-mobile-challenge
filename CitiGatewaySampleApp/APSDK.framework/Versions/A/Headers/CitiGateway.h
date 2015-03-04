//
//  CitiGateway.h
//  AnyPresence SDK
//

/*!
 @header CitiGateway
 @abstract CitiGateway class
 */

#import "APService.h"

/*!
 @class CitiGateway
 @abstract Contains configuration for the CitiGateway data source.
 */

@interface CitiGateway : APService

/*!
 @method setBaseURL:
 @abstract Sets base URL for the CitiGateway data source.
 @param url Base URL for CitiGateway.
 */
+ (void)setBaseURL:(NSURL *)url;

/*!
 @method setHTTPBasicAuthUsername:password:
 @abstract Sets HTTP Basic Auth info for the CitiGateway data source.
 @param username Username for CitiGateway.
 @param password Password for the username provided.
 */
+ (void)setHTTPBasicAuthUsername:(NSString *)username password:(NSString *)password;

/*!
 @method setSSLCertificate:
 @abstract Sets path to certificate associated with the CitiGateway data source.
 @param path Path to SSL certificate. (e.g. [[NSBundle mainBundle] pathForResource:@"MyCertificateName" ofType:@"cer"]).  This value must not be nil.
 @discussion Providing nil for a path is strictly prohibited.  Also please note that SSL pinning is incompatible with synchronous networking requests, so client code MUST use the asynchronous APIs.
 */
+ (void)setSSLCertificate:(NSString *)path;

/*!
 @method certificate
 @abstract Returns the certificate associated with CitiGateway.
 @result Binary representation of the certificate associate with CitiGateway.
 */
+ (NSData *)certificate;

/*!
 @method serializationFormat
 @abstract Returns the serialization format associated with CitiGateway.
 @result APSerializationFormat associated with CitiGateway.
 */
+ (enum APSerializationFormat)serializationFormat;

@end
