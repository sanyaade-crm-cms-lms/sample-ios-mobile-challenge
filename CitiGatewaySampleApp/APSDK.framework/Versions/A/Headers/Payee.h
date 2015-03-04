//
//  Payee.h
//  AnyPresence SDK
//

/*!
 @header Payee
 @abstract Payee class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class Payee
 @abstract Generated model object: Payee.
 @discussion Use @link //apple_ref/occ/cat/Payee(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/Payee/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface Payee : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a Payee.
 @result Class representing the data source associated with a Payee.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * id;

/*!
 @var payeeDescription
 @abstract Generated model property: payee_description.
 */
@property (nonatomic, strong) NSString * payeeDescription;

/*!
 @var payeeType
 @abstract Generated model property: payee_type.
 */
@property (nonatomic, strong) NSNumber * payeeType;

/*!
 @var paymentMethod
 @abstract Generated model property: payment_method.
 */
@property (nonatomic, strong) NSString * paymentMethod;

@end
