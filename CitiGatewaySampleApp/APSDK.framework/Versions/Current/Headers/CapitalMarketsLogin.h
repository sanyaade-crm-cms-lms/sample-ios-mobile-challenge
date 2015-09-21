//
//  CapitalMarketsLogin.h
//  AnyPresence SDK
//

/*!
 @header CapitalMarketsLogin
 @abstract CapitalMarketsLogin class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class CapitalMarketsLogin
 @abstract Generated model object: CapitalMarketsLogin.
 @discussion Use @link //apple_ref/occ/cat/CapitalMarketsLogin(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/CapitalMarketsLogin/token @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface CapitalMarketsLogin : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a CapitalMarketsLogin.
 @result Class representing the data source associated with a CapitalMarketsLogin.
 */
+ (Class)dataSource;

/*!
 @var token
 @abstract Generated model property: token.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * token;

/*!
 @var password
 @abstract Generated model property: password.
 */
@property (nonatomic, strong) NSString * password;

/*!
 @var username
 @abstract Generated model property: username.
 */
@property (nonatomic, strong) NSString * username;

@end
